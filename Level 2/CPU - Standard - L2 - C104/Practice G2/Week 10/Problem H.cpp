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



void burn() {
    int n, k;
    cin >> n >> k;
    vector<int>pr;
    for(int i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            n /= i;
            pr.push_back(i);
        }
    }
    if (n > 1)pr.push_back(n);
    if (sz(pr) < k)cout << -1 << "\n";
    else {
        for(int i = 0; i < k - 1; i++)cout << pr[i] << ' ';
        int ans = 1;
        for(int i = k - 1; i < sz(pr); i++)ans *= pr[i];
        cout << ans << "\n";
    }
}

int32_t main() {
    fast();

    int t = 1;
    //cin >> t;
    while(t--) {
        burn();
    }
}
