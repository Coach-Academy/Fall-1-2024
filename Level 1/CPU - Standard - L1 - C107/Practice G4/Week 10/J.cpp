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
    set<pair<int, int>>mon, pol;
    int id = 0, now_id, now_m;
    int q; cin>>q;
    while(q--){
        int x; cin>>x;
        if(x==1){
            int m; cin>>m;
            ++id;
            mon.insert(make_pair(id, -m));
            pol.insert(make_pair(-m, id));
        }
        else if(x==2){
            auto p = *mon.begin();
            now_id = p.first;
            now_m = p.second;
            cout<<now_id<<' ';
            mon.erase(mon.begin());
            pol.erase(pol.find(make_pair(now_m, now_id)));
        }
        else{
            auto p = *pol.begin();
            now_m = p.first;
            now_id = p.second;
            cout<<now_id<<' ';
            pol.erase(pol.begin());
            mon.erase(mon.find(make_pair(now_id, now_m)));
        }
    }
    return 0;
}
