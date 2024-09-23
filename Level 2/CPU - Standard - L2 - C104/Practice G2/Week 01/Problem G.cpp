#include<bits/stdc++.h>
using namespace std;

void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    //freopen("interdimensional.in", "r", stdin);

    // freopen("time.out", "w", stdout);

}


#define sz(x) (int)x.size()
#define int long long


string rec(string x, int k) {
    //base case
    if (sz(x) == 1)
        return x;
    //body
    int go = 0;
    for(int i = 0; i < sz(x); i++) {
        go += x[i] - '0';
    }
    go *= k;
    x = to_string(go);
    return rec(x, 1);
}

void burn(){
    string s;
    int k;
    cin >> s >> k;
    cout << rec(s, k) << '\n';
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}