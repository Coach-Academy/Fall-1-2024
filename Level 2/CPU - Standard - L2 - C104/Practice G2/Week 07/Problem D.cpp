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


bool check(int i, int j, vector<int>&b) {
    for(int k = 0; k < i; k++) {
        // j == b[k] ||  i | k  ||| j | b[k]
        if (j == b[k] || abs(i - k) == abs(j - b[k]))return 0;
    }
    return 1;
}

int rec(int i, vector<int>&a, vector<int>&b) {
    // base case
    if (i == 8) {
        return 0;
    }
    // body
    int ret = INT_MAX;
    for(int j = 0; j < 8; j++) {
        if (!check(i, j, b))continue;
        b[i] = j;
        ret = min(ret, rec(i + 1, a, b) + (a[i] != b[i]));
    }
    return ret;
}


void burn() {
/*
 * indicies -> col
 * value -> row
 */
    int id = 1;
    vector<int>a(8), b(8);
    while(cin >> a[0]) {
        a[0]--;
        for(int i = 1; i < 8; i++)cin >> a[i], a[i]--;
        cout << "Case " << id++ << ": " << rec(0, a, b) << "\n";
    }
}

signed main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}