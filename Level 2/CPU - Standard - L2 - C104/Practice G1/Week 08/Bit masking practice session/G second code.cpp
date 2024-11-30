
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
    int q;
    cin>>q;
    while (q--){
        ll l,r;
        cin>>l>>r;
        ll sum=0;
        ll ans=0;
        for(ll i=60;i>=0;i--){
            if((r>>i)&1){
                ll add=1ll<<i;
                add--;
                if(sum+add>=l&&sum+add<=r){
                    ans=sum+add;
                    break;
                }
                else
                    sum+=add+1;
            }
        }
        ll num1=__builtin_popcountll(l);
        ll num2=__builtin_popcountll(r);
        ll dude=__builtin_popcountll(ans);
        ll final=ans;
        if(num1==num2){
            if(num1>dude)
                final=l;

        }
        else if(num1!=num2){
            if(num1>dude)
                final=l;
            else if(num2>dude)
                final=r;
        }

        cout<<final<<"\n";
    }
}