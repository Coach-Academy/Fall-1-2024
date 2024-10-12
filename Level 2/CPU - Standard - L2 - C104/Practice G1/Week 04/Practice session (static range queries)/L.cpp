
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
    int t;
    cin>>t;
    while(t--) {
            int n,q;
            cin>>n>>q;
            string s;
            cin>>s;
            vector<int>x(n+1);
            for(int i=1;i<=n;i++)
                x[i]=x[i-1]+(s[i-1]=='+'?1:-1);
            vector<int>premin(n+1),premax(n+1);
            for(int i=1;i<=n;i++){
                premin[i]=min(premin[i-1],x[i]);
                premax[i]=max(premax[i-1],x[i]);
            }
            vector<int>sufmin(n+2,1e9),sufmax(n+2,-1e9);
            for(int i=n;i>=1;i--){
                sufmin[i]=min(sufmin[i+1],x[i]);
                sufmax[i]=max(sufmax[i+1],x[i]);
            }
        while (q--){
            int l, r;
            cin>>l>>r;
            int restrictedArea=x[r]-x[l-1];
            int mn=min(premin[l-1],sufmin[r+1]-restrictedArea);
            int mx=max(premax[l-1],sufmax[r+1]-restrictedArea);
            cout<<mx-mn+1<<"\n";
        }
    }

}