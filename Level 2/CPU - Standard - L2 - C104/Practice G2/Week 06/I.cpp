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

double eps = 1e-6;
vector<double>ans;

bool can(double mid, vector<double>&a, int n) {
    int i = 0;
    vector<double>temp;
    while(i < n) {
        double cur = a[i], next = a[i] + mid * 2;
        double med = a[i] + mid;
        temp.push_back(med);
        while(i < n && a[i] <= next)i++;
    }
    if (temp.size() <= 3) {
        ans = temp;
        return 1;
    }
    else return 0;
}

void burn() {
    cout << fixed << setprecision(6);
    int n;
    cin >> n;
    vector<double>a(n);
    for(auto &i : a)cin >> i;
    sort(a.begin(), a.end());
    double l = 0, r = 1e9;
    while(r - l >= eps) {
        double mid = (l + r) / 2;
        if (can(mid, a, n)) {
            r = mid;
        }
        else l = mid;
    }
    cout << r << "\n";
    for(auto i : ans) cout << i << " ";
    if (sz(ans) == 1)cout << "1 1\n";
    else if (sz(ans) == 2)cout << "1\n";
}

signed main() {
    fast();
    int t = 1;
    //cin >> t;

    for(int i = 1; i <= t; i++) {
        burn();
    }
}