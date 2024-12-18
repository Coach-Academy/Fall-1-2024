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
    int n, k;
    cin >> n >> k;
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    int sum = accumulate(a.begin(), a.end(), 0ll);
    priority_queue<pair<int, pair<int, int>>>pq;
    pq.push({sum, {0, n - 1}});
    map<pair<int, int>, int>mp;
    while(k--) {
        auto [s, p] = pq.top();
        auto [l, r] = p;
        if (mp[{l, r}]) {
            pq.pop();
            k++;
            continue;
        }
        mp[{l, r}]++;
        cout << s << ' ';
        pq.push({s - a[l], {l + 1, r}});
        pq.push({s - a[r], {l, r - 1}});
    }
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    while(t--) {
        burn();
    }
}
