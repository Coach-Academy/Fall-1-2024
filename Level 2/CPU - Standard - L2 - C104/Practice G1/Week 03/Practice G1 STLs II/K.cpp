
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
    while (t--){
        int n;
        cin>>n;
        vector<int>vec1(n);
        map<int,int>freq;
        for(int i=0;i<n;i++)
            cin>>vec1[i],freq[vec1[i]]++;
        map<int,int>freqoffreq;
        for(auto c:freq){
            freqoffreq[c.second]++;
        }
        int ans=INT_MAX;
        int prev=0;
        int numberofgroups=freq.size();
        for(auto c:freqoffreq){
            int after=n-prev-(c.first*c.second);
            numberofgroups-=c.second;
            ans=min(ans,prev+(after-(numberofgroups*c.first)));
            prev+=c.first*c.second;

        }
        cout<<ans<<"\n";
    }

}