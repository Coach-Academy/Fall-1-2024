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
    // freopen("input.txt", "r", stdin);
    //
    //  freopen("output.txt", "w", stdout);

}


#define sz(x) (int)x.size()
#define int long long


void burn() {
    int l, r;
    cin >> l >> r;
    int ans = r;
    /*
     * 101010
     * iterate over all bits and check which is on
     * off idx
     * on 0 -> idx - 1
     * l <= temp <= r ?
     */
    for(int i = 0; i <= 63 - __builtin_clzll(r); i++) {
        if ((r >> i) & 1) {
            int temp = r;
            temp &= ~(1ll << i);
            temp |= ((1ll << i) - 1);
            if (temp >= l) {
                int cnt1 = __builtin_popcountll(temp),
                    cnt2 = __builtin_popcountll(ans);
                if (cnt1 > cnt2 || (cnt1 == cnt2 && temp < ans)) {
                    ans = temp;
                }
            }
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    while(t--) {
        burn();
    }
}
