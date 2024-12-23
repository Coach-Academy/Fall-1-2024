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
    int n;
    cin >> n;
    map<int, int>pr;
    for(int i = 2; i <= n; i++) {
        int temp = i;
        for(int j = 2; j <= temp; j++) {
            while(temp % j == 0) {
                temp /= j;
                pr[j]++;
            }
        }
    }
    int ans = 1;
    for(auto i : pr) {
        ans *= (i.second + 1);
        ans %= (int)(1e9 + 7);
    }
    cout << ans;
}

int32_t main() {
    fast();

    int t = 1;
    //cin >> t;
    while(t--) {
        burn();
    }
}
