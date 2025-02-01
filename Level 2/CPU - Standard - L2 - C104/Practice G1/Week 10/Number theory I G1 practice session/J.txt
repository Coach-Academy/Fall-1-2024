
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
bitset<100000005>composite(0);
int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    for(int i=2;i*i<=1e8;i++){
        if(composite[i])
            continue;
        for(int j=i+i;j<=1e8;j+=i){
            composite[j]=true;
        }
    }
    int cnt=0;
    for(int i=2;i<=1e8;i++){
        if(!composite[i]){
            cnt++;
            if(cnt%100==1)
                cout<<i<<"\n";
        }
    }


}