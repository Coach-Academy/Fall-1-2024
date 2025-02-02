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
    int g, l;
    cin >> g >> l;
    if (l % g == 0)cout << g << ' ' << l << "\n";
    else cout << "-1\n";
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}