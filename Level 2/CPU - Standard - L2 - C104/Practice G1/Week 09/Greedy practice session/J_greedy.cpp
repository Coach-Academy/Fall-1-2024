
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

bool dominated(set<pair<int,int>>&seto){
    if(seto.size()==1){
        if(seto.begin()->first>1)
            return true;
        return false;
    }
    auto last=seto.end();
    last=prev(last);
    auto beforelast=prev(last);
    if(last->first>beforelast->first)
        return true;
    return false;
}
int main() {
    FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> vec1(n);
        for (int i = 0; i < n; i++)
            cin >> vec1[i];
        vector<int>lastindex(n+1,-1);
        int ans=1e9;
        for(int i=0;i<n;i++) {
            if (lastindex[vec1[i]] != -1) {
                ans=min(ans,i-lastindex[vec1[i]]+1);
            }
            lastindex[vec1[i]]=i;
        }
        if(ans==1e9)
            cout<<-1<<"\n";
        else
            cout<<ans<<"\n";

    }

}