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
    int n; cin>>n;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll health = 0;
    for(int i = 0 ; i < n ; i++){
        ll x; cin>>x;
        health+=x;
        pq.push(x);
        while(health < 0){
            health-=pq.top();
            pq.pop();
        }
    }
    cout<<sz(pq);
    return 0;
}
