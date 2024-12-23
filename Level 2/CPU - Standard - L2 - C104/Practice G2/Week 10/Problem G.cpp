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

vector<int>pr(1000001), a;

void burn() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>v(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;
            int l = 0, r = sz(a), val = -1;
            while(l <= r) {
                int mid = (l + r) / 2;
                if (a[mid] >= x) {
                    val = a[mid];
                    r = mid - 1;
                }
                else l = mid + 1;
            }
            v[i][j] = val - x; // at row i, col j    a[i][j] need (val - x) operation to be prime
        }
    }
    int ans = 1e18;
    for(int i = 0; i < n; i++) {
        int need = 0;
        for(int j = 0; j < m; j++) {
            need += v[i][j];
        }
        ans = min(ans, need);
    }
    for(int j = 0; j < m; j++) {
        int need = 0;
        for(int i = 0; i < n; i++) {
            need += v[i][j];
        }
        ans = min(ans, need);
    }
    cout << ans << "\n";
}

int32_t main() {
    fast();
    // preprocess
    for(int i = 2; i <= 1000000; i++) {
        if (!pr[i]) {
            a.push_back(i);
            for(int j = i + i; j <= 1000000; j += i) {
                pr[j] = 1;
            }
        }
    }

    int t = 1;
    //cin >> t;
    while(t--) {
        burn();
    }
}
