#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    stack<int> st;
    while (t--) {
        int q;
        cin >> q;
        if (q == 1) {
            int n;
            cin >> n;
            st.push(n);
        } else if (q == 2) {
            if (!st.empty())
                st.pop();
        } else {
            if (st.empty())
                cout << "Empty!" << endl;
            else
                cout << st.top() << endl;
        }

    }
    return 0;
}