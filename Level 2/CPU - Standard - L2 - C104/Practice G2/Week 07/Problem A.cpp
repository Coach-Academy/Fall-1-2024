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

int n, total_len;
vector<int>a;

bool rec(int i, int sum) {
    //base case

    if (i == n) {
        /*
        if (sum == total_len)
            return 1;
        else return 0;
         */
         return !(total_len - sum);
    }
    return max(rec(i + 1, sum + a[i]), rec(i + 1, sum));
}

void burn() {
    cin >> total_len >> n;
    a = vector<int>(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    cout << (rec(0,  0)?"YES\n":"NO\n");
}

signed main() {
    fast();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}