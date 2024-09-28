
#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <cctype>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <sstream>
#include <iterator>
#include <map>
#include <unordered_set>
#include <bitset>
#include <utility>
#include <iomanip>
//#include <bits/stdc++.h>
#define ll long long

#define FAST                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
using namespace std;
long long const inf=1e18;
int calc(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}


int main() {
     FAST
//#ifndef ONLINE_JUDGE
//    freopen("Input.txt", "r", stdin);
//    freopen("Output.txt", "w", stdout);
//#endif
    int q;
    cin>>q;
    while (q--){
        string s;
        cin>>s;
        stack<char>st;
        bool valid=true;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')'&&!st.empty()&&st.top()=='('){
                st.pop();
            }
            else if(s[i]==']'&&!st.empty()&&st.top()=='['){
                st.pop();
            }
            else if(s[i]=='}'&&!st.empty()&&st.top()=='{'){
                st.pop();
            }
            else {
                valid = false;
                break;
            }
        }
        if(valid&&st.empty()){
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
    }

}