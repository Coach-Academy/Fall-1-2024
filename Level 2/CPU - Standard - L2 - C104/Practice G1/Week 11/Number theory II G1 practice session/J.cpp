
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
#include <bits/stdc++.h>
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
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int ts;
    cin>>ts;
    while(ts--) {
        string s,t;
        cin>>s>>t;
        int g=gcd(s.size(),t.size());
        string mutual=s.substr(0,g);
        int cnt=s.size()/g;
        string temp="";
        while (cnt--){
            temp+=mutual;
        }
        if(s!=temp){
            cout<<-1<<"\n";
            continue;
        }
         cnt=t.size()/g;
         temp="";
        while (cnt--){
            temp+=mutual;
        }
        if(t!=temp){
            cout<<-1<<"\n";
            continue;
        }
        cnt=lcm(s.size(),t.size())/g;
        temp="";
        while (cnt--){
            temp+=mutual;
        }
        cout<<temp<<"\n";
    }

}