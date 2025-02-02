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

vector<int> Common_divisors(int a, int b) {
    vector<int>ret;
    int g = __gcd(a, b);
    for(int i = 1; i * i <= g; i++) {
        if (g % i == 0) {
            ret.push_back(i);
            if(i * i != g)ret.push_back(g / i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}

void burn(){
    int a, b;
    cin >> a >> b;
    vector<int>cd = Common_divisors(a, b);

    int q;
    cin >> q;
    while(q--) {
        int low, high;
        cin >> low >> high;
        int idx = upper_bound(cd.begin(), cd.end(), high) - cd.begin() - 1;
        if (~idx && cd[idx] >= low)cout << cd[idx] << "\n";
        else cout << "-1\n";
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