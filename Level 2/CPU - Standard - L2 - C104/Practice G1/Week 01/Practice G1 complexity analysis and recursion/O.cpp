
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
    int n,s,d;
    cin>>n>>s>>d;
    int time[n], damage[n];
    for(int i=0;i<n;i++)
        cin>>time[i]>>damage[i];
    bool exist=false;
    for(int i=0;i<n;i++){
        if(time[i]<s&&damage[i]>d){
            exist= true;
            break;
        }
    }
    if(exist)
        cout<<"Yes\n";
    else
        cout<<"No\n";

}