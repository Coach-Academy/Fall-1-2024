#include <bits/stdc++.h>
 
using namespace std;

#define fixed(n) fixed << setprecision(n)
#define dl "\n"
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000
#define Mod 1000000007

void Solve() {
    int n , k; cin >> n >> k;
    int ans = 0;

    for(int i=0; i<n; i++){
        string s; cin >> s;

        sort(s.begin(), s.end());
        s.resize(unique(s.begin(), s.end()) - s.begin());

        if(s.size() >= k + 1 and s[k] - '0' == k)
            ans++;
    }

    cout << ans << dl;
}  

int32_t main(){
    
    int testCases = 1;
    // cin >> testCases;
    
    for(int t = 1; t<=testCases; t++){
        // cout << "set #" << t << ": " << dl;
        Solve();
    }
 
    return 0;
}