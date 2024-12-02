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

bool nobit(int x, int y) {
    return x >> y & 1;
}

int setbit(int x, int y) {
    return x | (1 << y);
}

void burn() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    vector<int>b(n);
    int cnt = 0;
    for(int i = 0; i < 32; i++) {
        for(int k = 0; k < n; k++) {
            if(nobit(a[k], i))cnt++;
        }
        for(int j = 0; j < cnt; j++) {
            b[j] = setbit(b[j], i);
        }
        cnt = 0;
    }
    int sum = 0;
    for(auto c: b) {
        sum += 1ll * c * c;
    }
    cout << sum << "\n";

}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    while(t--) {
        burn();
    }
}
