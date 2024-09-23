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
#define ll long long


void burn(){
    int n;
    cin >> n;
    int mn = INT_MAX;
    while(n--) {
        int a, p, x;
        cin >> a >> p >> x;
        if (x > a) {
            mn = min(mn, p);
        }
    }
    if (mn == INT_MAX)cout << -1 << '\n';
    else cout << mn << "\n";
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}