
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
    vector<int>divisors(1e6+5);
    for(int i=1;i<=1e6;i++){
        for(int j=i;j<=1e6;j+=i)
            divisors[j]++;
    }
    int a,b,c;
    cin>>a>>b>>c;
    int ans=0;
    for(int i=1;i<=a;i++)
        for(int j=1;j<=b;j++)
            for(int k=1;k<=c;k++){
                ans+=divisors[i*j*k];
            }
    cout<<ans<<"\n";

}