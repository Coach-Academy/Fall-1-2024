
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
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    while (true){
        ll x;
        cin>>x;
        if(x==0)
            break;
        map<ll,int>mp;
        for(ll i=2;i*i<=x;i++){
            while (x%i==0){
                x/=i;
                mp[i]++;
            }
        }
        if(x!=1)
            mp[x]++;
        for(auto c:mp)
            cout<<c.first<<"^"<<c.second<<" ";
        cout<<"\n";
    }

}