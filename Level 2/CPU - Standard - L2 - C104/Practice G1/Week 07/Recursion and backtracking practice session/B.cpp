
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
vector<ll>luckyNumbers;
void rec(ll num){
    //base case
    if(num>1e10)
        return;
    luckyNumbers.push_back(num);
    rec(num*10+4);
    rec(num*10+7);
}

int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    rec(0);
    std::sort(luckyNumbers.begin(), luckyNumbers.end());
    ll l,r;
    cin>>l>>r;
    ll ans=0;
    for(ll i=l;i<=r;i++){
        auto val= *std::lower_bound(luckyNumbers.begin(), luckyNumbers.end(),i);
        ll cnt=val-i+1;
        cnt=min(cnt,r-i+1);
        ans+=cnt*val;
        i=val;
    }
    cout<<ans<<"\n";

}