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


void burn(){
    int n, d;
    cin >> n >> d;
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    int l = 0, r = 0, ans = 0;
    while(l < n) {
        while(r < n && a[r] - a[l] <= d)r++;
        r--;
        int tot = r - l, add = (tot - 1) * tot / 2;
        ans += add;
        l++;
    }
    cout << ans << "\n";
}

int32_t main() {
    fast();

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}