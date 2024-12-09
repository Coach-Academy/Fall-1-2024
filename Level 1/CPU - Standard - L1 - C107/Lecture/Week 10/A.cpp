#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int ans = 0;
        map<int, int> mp;
//        set<int> st;
//        for (int i = 0; i < n + m; i++){
//            int x;
//            cin >> x;
//            auto it = st.insert(x);
//            if(it.second == 0)
//                ans++;
//        }
        for (int i = 0; i < n + m; i++) {
            int x;
            cin >> x;
            mp[x]++;
            if (mp[x] > 1)
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}