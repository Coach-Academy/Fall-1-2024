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
    int q; cin>>q;
    string s;
    stack<string>states;
    while(q--){
        int op; cin>>op;
        if(op==1){
            string w; cin>>w;
            states.push(s);
            s+=w;
        }
        else if(op==2){
            int k; cin>>k;
            states.push(s);
            s = s.substr(0, s.size()-k);
        }
        else if(op==3){
            int k; cin>>k;
            cout<<s[k-1]<<el;
        }
        //op==4
        else{
            s = states.top();
            states.pop();
        }
    }
    return 0;
}
