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
    vector<int>ind(n + 1), a(n), ans;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        ind[a[i]] = i;
    }

    for(int i = n; i >= 1; i--) {
        if (ind[i] >= a.size()) continue;
        else {
            for(int j = ind[i]; j < a.size(); j++) {
                ans.push_back(a[j]);
            }

            int sz = a.size();
            for(int k = 0; k < sz - ind[i]; k++) {
                a.pop_back();
            }
        }
    }
    for(auto i : ans)cout << i << ' ';
    cout << '\n';
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}