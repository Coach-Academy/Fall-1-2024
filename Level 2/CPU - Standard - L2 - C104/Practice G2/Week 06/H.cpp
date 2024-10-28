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

bool can(int mid, vector<int>a, int n, int k) {
    // 1 3 5 || med = 6  3 1
    int cnt = 0;
    for(int i = n / 2; i < n; i++) {
        if (mid > a[i])cnt += mid - a[i];
    }
    return cnt <= k;
}

void burn() {
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    sort(a.begin(), a.end());
    int l = 0, r = 2e9, ans = 0;
    while(l <= r) {
        int mid = (l + r) / 2;
        if (can(mid, a, n, k)) {
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
    }
    cout << ans << "\n";
    // 2e5 el = 1   1e5     1e15 1e20
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}