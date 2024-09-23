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
#define ll long long


void burn(){
    string s;
    cin >> s;
    string t = "";
    for(int i = 0; i < sz(s); i++) {
        if (s[i] == '+')continue;
        t += s[i];
    }
    sort(t.begin(), t.end());
    for(int i = 0; i < sz(t); i++) {
        cout << t[i];
        if (i == sz(t) - 1)break;
        cout << '+';
    }
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}