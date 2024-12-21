
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
        ll n;
        cin>>n;
        vector<pair<int,ll>>primeFreq;
        for(ll i=2;i*i<=n;i++){
            int cnt=0;
            while (n%i==0){
                n/=i;
                cnt++;
            }
            if(cnt>0){
                primeFreq.push_back({cnt,i});
            }

        }
        if(n!=1){
            primeFreq.push_back({1,n});
        }
        std::sort(primeFreq.begin(), primeFreq.end());
        int mostFreq=primeFreq.back().first;
        ll mostFrequentNumber=primeFreq.back().second;
        vector<ll>ans(mostFreq,mostFrequentNumber);
        for(int i=0;i<primeFreq.size()-1;i++){
            int cnt=primeFreq[i].first;
            ll primenum=primeFreq[i].second;
            while (cnt--){
                ans.back()*=primenum;
            }
        }
        cout<<mostFreq<<"\n";
        for(auto c:ans)
            cout<<c<<" ";
        cout<<"\n";
    }

}