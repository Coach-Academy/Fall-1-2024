#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define el '\n'
#define spaghetti ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define r_all(v)  v.rbegin(),v.rend()
#define fsp(n) fixed<<setprecision(n)
#define sz(s) s.size()
const ld Pi = acos(-1);
const int MOD = 10e9 + 7, N = 105;


int main()
{
    spaghetti
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<int>v(N);
        for(int i = 0 ; i < n ; i++){
            int x; cin>>x;
            v[x] = true;
        }
        int ans = 0;
        for(int i = 0 ; i < m ; i++){
            int x; cin>>x;
            if(v[x]) ans++;
        }
        cout<<ans<<el;
    }
    return 0;
}
