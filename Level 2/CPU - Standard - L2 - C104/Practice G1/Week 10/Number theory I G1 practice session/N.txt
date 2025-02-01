
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

    vector<int>factors(1e6+5);
    for(int i=2;i<=1e6;i++)
    {
        if(factors[i]>0)
            continue;
        for(int j=i;j<=1e6;j+=i){
            factors[j]++;
        }
    }
    vector<vector<int>>numbers(11);
    for(int i=1;i<=1e6;i++){
        //10
        // 2^1 * 5^1
        numbers[factors[i]].push_back(i);
    }
    int t;
    cin>>t;
    while (t--){
        int a,b,n;
        cin>>a>>b>>n;
        int ans= std::upper_bound(numbers[n].begin(), numbers[n].end(),b)-
                 std::lower_bound(numbers[n].begin(), numbers[n].end(),a);
        cout<<ans<<"\n";
    }


}