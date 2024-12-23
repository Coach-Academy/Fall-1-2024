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
vector<int>pr(1000001);

void burn() {
    int x;
    cin >> x;
    if (t_p.find(x) != t_p.end())cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    fast();
    // preprocess
    for(int i = 2; i <= 1e6; i++) {
        if (!pr[i]) {
            t_p.insert(i * i); // add the T_prime
            for(int j = i + i; j <= 1e6; j += i) {
                pr[j] = 1;
            }
        }
    }
    int t = 1;
    cin >> t;
    while(t--) {
        burn();
    }
}
