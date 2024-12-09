#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        int ans = 0;
        for (auto c: s) {
            if (st.find(c) == st.end()) { // !st.count(c)
                ans += 2;
                st.insert(c);
            } else ans++;
        }
        cout << ans << endl;
    }
    return 0;
}