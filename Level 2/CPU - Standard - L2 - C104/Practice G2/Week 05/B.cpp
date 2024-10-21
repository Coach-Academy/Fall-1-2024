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
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    int l = 0, r = n - 1, first = 0, second = 0;
    bool f = 1;
    while(l <= r) {
        if (f) {
            if (a[l] < a[r])first += a[r--];
            else first += a[l++];
            f = 0;
        }
        else {
            if (a[l] < a[r])second += a[r--];
            else second += a[l++];
            f = 1;
        }
    }
    cout << first << ' ' << second << "\n";
}

int32_t main() {
    fast();

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}