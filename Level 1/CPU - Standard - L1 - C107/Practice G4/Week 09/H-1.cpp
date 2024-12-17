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
    int n, x, ans = 0;
    ll health = 0;
    multiset<int>mst;
    cin>>n;
    while(n--){
        cin>>x;
        if(x>=0){
           health+=x;
            ans++;
        }
        else if(health + x >= 0){
            health+=x;
            ans++;
            mst.insert(x);
        }
        else if(!mst.empty() && *mst.begin() < x){
            int a = *mst.begin();
            mst.erase(mst.begin());
            health-=a;
            health+=x;
            mst.insert(x);
        }
    }
    cout<<ans;
    return 0;
}
