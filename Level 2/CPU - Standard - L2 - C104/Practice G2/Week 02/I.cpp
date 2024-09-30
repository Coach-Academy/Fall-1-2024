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
    //freopen("interdimensional.in", "r", stdin);

    // freopen("time.out", "w", stdout);

}


#define sz(x) (int)x.size()
#define int long long

void burn(){
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>ans;
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 1; i < n; i++) {
        if(a[i] == 1) {
            ans.push_back(a[i - 1]);
        }
    }
    ans.push_back(a[n - 1]);
    cout << sz(ans) << "\n";
    for(auto i : ans)cout << i << " ";
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}