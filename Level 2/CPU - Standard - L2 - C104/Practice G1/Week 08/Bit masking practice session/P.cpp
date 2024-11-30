
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
        ll x;
        cin>>x;
        ll start=0;
        for(ll i=40;i>=0;i--){
            if((x>>i)&1){
                start=i;
                break;
            }
        }
        ll ans=0;
        for(ll i=start-1;i>=0;i--){
            if(!((x>>i)&1))
                ans+=1ll<<i;

        }
        cout<<ans<<"\n";
    }

}