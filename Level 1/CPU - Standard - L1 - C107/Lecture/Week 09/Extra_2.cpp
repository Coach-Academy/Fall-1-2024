#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i: a) cin >> i;
        vector<int> ans(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while(!st.empty() && a[i] >= st.top())
                st.pop();
            if (!st.empty())
                ans[i] = st.top();
            st.push(a[i]);
        }
        for(auto i : ans)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}