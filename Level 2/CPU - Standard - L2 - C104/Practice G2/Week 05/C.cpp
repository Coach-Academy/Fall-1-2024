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
    sort(a.begin(), a.end());
    int l = 0, r = n / 2, tot = n;
    while(r < n && l < n / 2) {
        if (a[l] * 2 <= a[r]) {
            r++;
            l++;
            tot--;
        }
        else {
            r++;
        }
    }
    cout << tot << "\n";
}

int32_t main() {
    fast();

    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}