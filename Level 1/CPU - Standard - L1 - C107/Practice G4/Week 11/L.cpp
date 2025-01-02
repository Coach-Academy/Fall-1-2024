#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define el '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define r_all(v)  v.rbegin(),v.rend()
#define fsp(n) fixed<<setprecision(n)
#define sz(s) s.size()
const ld Pi = acos(-1);
const int MOD = 10e9 + 7, N = 1e6+5;

int f(int n){ //product of non zero digit
    if(n==0) return 1;
    while(n%10==0) n/=10;
    return n%10 * f(n/10);
}
int g(int n){
    if(n/10==0) return n;
    return g(f(n));
}

void solve(){
    int x[10][1000005] = {};
    for(int i = 1 ; i <= 1e6 ; i++){
        x[g(i)][i]++;
    }
    for(int i = 1 ; i < 10 ; i++){
        for(int j = 1 ; j <= 1e6 ; j++){
            x[i][j]+=x[i][j-1];
        }
    }
    int q; cin>>q;
    while(q--){
        int l, r, k; cin>>l>>r>>k;
        cout<<x[k][r] - x[k][l-1]<<el;
    }
}
int main()
{
    fast
    solve();
    return 0;
}
