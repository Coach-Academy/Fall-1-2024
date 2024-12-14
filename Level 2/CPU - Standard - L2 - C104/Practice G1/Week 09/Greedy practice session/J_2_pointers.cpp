
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
        map<int,int>freq;
        set<pair<int,int>>seto;
        int l=0,r=0;
        int ans=1e9;
        while (l<=r&&r<n){
                if(seto.find({freq[vec1[r]],vec1[r]})!=seto.end()){
                    seto.erase({freq[vec1[r]],vec1[r]});
                }
                freq[vec1[r]]++;
                seto.insert({freq[vec1[r]],vec1[r]});
            while (dominated(seto)){
                    ans=min(ans,r-l+1);
                    seto.erase({freq[vec1[l]],vec1[l]});
                    freq[vec1[l]]--;
                    if(freq[vec1[l]]>0)
                        seto.insert({freq[vec1[l]],vec1[l]});
                    l++;
            }

            r++;
        }
        if(ans==1e9)
            cout<<-1<<"\n";
        else
            cout<<ans<<"\n";

    }

}