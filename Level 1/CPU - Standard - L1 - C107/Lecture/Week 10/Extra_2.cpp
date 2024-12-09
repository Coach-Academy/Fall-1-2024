#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        map<int, int> mp;
        vector<vector<int>> a(m);
        for (int i = 0; i < m; i++) {
            int ni;
            cin >> ni;
            a[i].resize(ni);
            for (auto &f: a[i]) {
                cin >> f;
                mp[f] = i;
            }
        }
        vector<int> ans;
        bool flag = true;
        for (int i = 0; i < m; i++) {
            vector<int> temp;
            for (auto x: a[i])
                if (mp[x] == i)
                    temp.push_back(x);
            if (temp.empty()) {
                flag = false;
                break;
            }
            ans.push_back(temp.front()); // temp.back();
        }

        if (flag) {
            for (auto i: ans) cout << i << " ";
            cout << endl;
        } else
            cout << -1 << endl;
    }
    return 0;
}