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
//#define int long long

const int N = 1e6;
int pre[11][N + 1], fac[N + 1], pr[N + 1];
vector<int>p;

void burn() {
    int a, b, n;
    cin >> a >> b >> n;
    cout << pre[n][b] - pre[n][a - 1] << '\n';
}

int32_t main() {
    fast();
    for(int i = 2; i <= N; i++) {
        if (!pr[i]) {
            p.push_back(i);
            for(int j = i + i; j <= N; j += i) {
                pr[j] = 1;
            }
        }
    }
    for(int i = 1; i <= N; i++) {
        int temp = i, tot = 0;
        for(auto j : p) {
            bool ok = 0;
            if (j * j > temp)break;
            while(temp % j == 0) {
                temp /= j;
                ok = 1;
            }
            if (ok)tot++;
        }
        if (temp > 1)tot++;
        fac[i] = tot;
    }
    for(int i = 0; i <= 10; i++) {
        for(int j = 1; j <= N; j++) {
            pre[i][j] = pre[i][j - 1] + (fac[j] == i);
        }
    }
    int t = 1;
    cin >> t;
    while(t--) {
        burn();
    }
}
