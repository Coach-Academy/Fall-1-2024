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

string Balanced(string s){
    stack<char>st;
    for(char c : s){
        if(c=='(' || c=='{' || c=='[')
            st.push(c);
        else{
            if(st.empty()) return "NO";
            char top = st.top();
            if((c==')' && top == '(') ||
               (c=='}' && top == '{') ||
               (c==']' && top=='['))
                st.pop();
            else return "NO";
        }
    }
    return st.empty() ? "YES" : "NO";
}
int main()
{
    spaghetti
    int t = 1; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<Balanced(s)<<el;
    }
    return 0;
}
