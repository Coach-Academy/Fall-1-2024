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
    int n, x;
    cin >> n >> x;
    vector<int>a(n + 1);
    for(int i = 1; i <= n; i++)cin >> a[i], a[i] += a[i - 1];
    int l = 1, r = 1, ans = 1e12;
    while(r <= n) {
        if(a[r] - a[l - 1] >= x) {
            ans = min(ans, r - l + 1);
            l++;
        }
        else r++;
    }
    cout << (ans == 1e12?-1:ans) << "\n";
}

int32_t main() {
    fast();

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}