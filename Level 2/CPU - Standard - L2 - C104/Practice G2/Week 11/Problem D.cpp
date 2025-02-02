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
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    sort(a.rbegin(), a.rend());
    int g = 0;
    for(int i = 0; i < n; i++) {
        g = __gcd(a[i], g);
        int mx = 0;
        for(int j = i + 1; j < n; j++) {
            int newg = __gcd(g, a[j]);
            if (newg > mx) {
                mx = newg;
                swap(a[i + 1], a[j]);
            }
        }
    }
    for(auto i : a)cout << i << ' ';
    cout << "\n";
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}