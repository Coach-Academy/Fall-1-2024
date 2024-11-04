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

int n, total_len;
vector<int>a;

int rec(int n, int cnt, int m) {
    // base case
    if (n == m)
        return cnt;
    if (n > m)return -1;
    return max(rec(n * 2, cnt + 1, m), rec(n * 3, cnt + 1, m));
}

void burn() {
    int n, m;
    cin >> n >> m;
    cout << rec(n, 0, m);
}

signed main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}