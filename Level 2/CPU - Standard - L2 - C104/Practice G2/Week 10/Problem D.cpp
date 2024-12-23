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
    // freopen("bank.in", "r", stdin);
    // freopen("bank.out", "w", stdout);
}


#define sz(x) (int)x.size()
#define int long long

set<int>t_p;
vector<int>pr(1001), a, pri(1001);

void burn() {
    int n, k;
    cin >> n >> k;
    int tot = 0;
    for(int i = 2; i <= n; i++) {
        tot += pri[i];
    }
    if (k <= tot)cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    fast();
    // preprocess
    for(int i = 2; i <= 1000; i++) {
        if (!pr[i]) {
            a.push_back(i);
            for(int j = i + i; j <= 1000; j += i) {
                pr[j] = 1;
            }
        }
    }
    for(int  i = 1; i < sz(a); i++) {
        if (!pr[a[i - 1] + a[i] + 1])pri[a[i - 1] + a[i] + 1] = 1;
    }
    int t = 1;
    //cin >> t;
    while(t--) {
        burn();
    }
}
