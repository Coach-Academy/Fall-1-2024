#include<bits/stdc++.h>
using namespace std;

void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //freopen("interdimensional.in", "r", stdin);

    // freopen("time.out", "w", stdout);

}


#define sz(x) (int)x.size()
#define int long long

void burn(){
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int>cur(n + 2), pre_mn(n + 2), pre_mx(n + 2),
                suf_mn(n + 2, 1e9), suf_mx(n + 2, -1e9);

    for(int i = 0; i < n; i++) {
        cur[i + 1] = cur[i] + (s[i] == '+'?1:-1);
        pre_mn[i + 1] = min(pre_mn[i], cur[i + 1]);
        pre_mx[i + 1] = max(pre_mx[i], cur[i + 1]);
        suf_mn[i + 1] = cur[i + 1];
        suf_mx[i + 1] = cur[i + 1];
    }
    for(int i = n; i >= 0; i--) {
        suf_mn[i] = min(suf_mn[i + 1], suf_mn[i]);
        suf_mx[i] = max(suf_mx[i], suf_mx[i + 1]);
    }
    while(m--) {
        int l, r;
        cin >> l >> r;
        int mn_suf = suf_mn[r + 1],
            mx_suf = suf_mx[r + 1],
            mn_pre = pre_mn[l - 1],
            mx_pre = pre_mx[l - 1],
            last_cur = cur[r],
            new_cur = cur[l - 1],
            dif = new_cur - last_cur;
        mn_suf += dif;
        mx_suf += dif;
        int mn = min(mn_pre, mn_suf), mx = max(mx_pre, mx_suf);
        cout << mx - mn + 1 << "\n";
    }
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}