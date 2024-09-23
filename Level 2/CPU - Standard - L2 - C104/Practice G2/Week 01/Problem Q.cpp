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
    int n, x;
    cin >> n >> x;
    bool ok = 1;
    while(n--) {
        int a, b;
        cin >> a >> b;
        if (a == x || 7 - a == x || b == x || 7 - b == x) {
            ok = 0;
        }
    }
    cout << (ok?"YES\n":"NO\n");
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}