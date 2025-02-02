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
#define double long double

void burn(){
    int n;
    cin >> n;
    if (n % 2 == 0)cout << n / 2 << ' ' << n / 2 << "\n";
    else {
        int mx = 1;
        for(int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                mx = max(mx, n / i);
            }
        }
        cout << mx << ' ' << n - mx << "\n";
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