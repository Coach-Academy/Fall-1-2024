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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>a(n + 1);
    for(int i = 1; i <= n; i++)cin >> a[i];
    vector<vector<int>> op(m + 1, vector<int>(3));
    for(int i = 1; i <= m; i++) {
        // 0 l | 1 r | 2 d
        for(int j = 0; j < 3; j++) {
            cin >> op[i][j];
        }
    }
    vector<int>par(m + 2), par2(n + 2);
    while(k--) {
        int l, r;
        cin >> l >> r;
        par[l]++;
        par[r + 1]--;
    }
    for(int i = 1; i <= m; i++)par[i] += par[i - 1];
    // i 1 - n
    for(int i = 1; i <= m; i++) {
        // l   r   d
        int l = op[i][0], r = op[i][1], d = op[i][2];
        par2[l] += d * par[i];
        par2[r + 1] -= d * par[i];
    }
    for(int i = 1; i <= n; i++) {
        par2[i] += par2[i - 1];
        cout << a[i] + par2[i] << ' ';
    }
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}
