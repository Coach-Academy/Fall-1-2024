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
    int n, k, q;
    cin >> n >> k >> q;
    vector<int>par(2e5 + 1), pre(2e5 + 1);
    while(n--) {
        int l, r;
        cin >> l >> r;
        // recommended degrees
        par[l]++;
        par[r + 1]--;
    }

    for(int i = 1; i <= 2e5; i++) {
        par[i] += par[i - 1];
        // par[i] = how many recipes recommended for i;
        if (par[i] >= k) {
            pre[i]++;
        }
        pre[i] += pre[i - 1];
    }

    while(q--) {
        int a, b;
        cin >> a >> b;
        cout << pre[b] - pre[a - 1] << "\n";
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