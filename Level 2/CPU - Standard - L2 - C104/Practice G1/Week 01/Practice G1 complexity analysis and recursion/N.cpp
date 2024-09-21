
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

int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    for(int i=0;i<n;i++)
        cin>>arr[i],sum+=arr[i];
    ll x;
    cin>>x;
    ll index=0;
    index=(x/sum)*n;
    ll currx=(x/sum)*sum;
    for(int i=0;i<n;i++){
        currx+=arr[i];
        index++;
        if(currx>x)
            break;
    }
    cout<<index;

}