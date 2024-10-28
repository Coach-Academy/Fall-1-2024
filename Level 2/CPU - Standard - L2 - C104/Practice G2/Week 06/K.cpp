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

string s;
vector<int>in(3), p(3), f(3);
int b;

bool can(int mid) {
    int sum = 0;
    //B
    if(mid * f[0] > in[0] && in[0])
        // 10000 * 1e14  1e18)
            sum += p[0] * (mid * f[0] - in[0]);
    //S
    if(mid * f[1] > in[1] && in[1])
        sum += p[1] * (mid * f[1] - in[1]);
    //C
    if(mid * f[2] > in[2] && in[2])
        sum += p[2] * (mid * f[2] - in[2]);
    return sum <= b;
}

void burn() {
    cin >> s;
    for(auto &i : in)cin >> i;
    for(auto &i : p)cin >> i;
    cin >> b;
    for(int i = 0; i < sz(s); i++) {
        // 0 - B | 1 - S | 2 - C
        if (s[i] == 'B')f[0]++;
        else if (s[i] == 'S')f[1]++;
        else f[2]++;
    }
    /*
     * B
     * 100
     * 1
     * 1e12 + 100
     * 100 + 1e12
     */
    int l = 0, r = 1, ans = -1;
    while(can(r))r *= 2;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if (can(mid)) {
            l = mid + 1;
            ans = mid;
        }
        else r = mid - 1;
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