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

bool can(int mid, vector<int>a, int k, int n) {
    a[0] += mid;
    for(int i = 1; i < n; i++) {
        if (a[i] * 100 > k * a[i - 1])return 0;
        a[i] += a[i - 1];
    }
    return 1;
}

void burn() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    // 1e17 * 100
    int l = 0, r = 1e15, ans = -1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (can(mid, a, k, n)) {
            r = mid - 1;
            ans = mid;
        }
        else l = mid + 1;
    }
    cout << ans << "\n";
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}