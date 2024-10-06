
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
    priority_queue<int,vector<int>,greater<int>>pq;
    vector<pair<string,int>>ans;
    int q;
    cin>>q;
    map<int,int>freq;
    while (q--){
        string s;
        cin>>s;
        if(s=="insert"){
            int x;
            cin>>x;
            ans.push_back({"insert",x});
            pq.push(x);
            freq[x]++;
        }
        else if (s=="getMin"){
            int x;
            cin>>x;
            if(pq.empty()){
                ans.push_back({"insert",x});
                pq.push(x);
                freq[x]++;
                ans.push_back({"getMin",x});

            }
            else if(freq[x]>0){
                while (pq.top()<x){
                    ans.push_back({"removeMin",INT_MAX});
                    freq[pq.top()]--;
                    pq.pop();
                }
                ans.push_back({"getMin",x});
            }
            else{
                ans.push_back({"insert",x});
                pq.push(x);
                freq[x]++;
                while (pq.top()<x){
                    ans.push_back({"removeMin",INT_MAX});
                    freq[pq.top()]--;
                    pq.pop();
                }
                ans.push_back({"getMin",x});
            }
        }
        else if(s=="removeMin"){
            if(pq.empty()){
                ans.push_back({"insert",21});
                pq.push(21);
                freq[21]++;
            }
            ans.push_back({"removeMin",INT_MAX});
            freq[pq.top()]--;
            pq.pop();
        }
    }
    cout<<ans.size()<<"\n";
    for(auto c:ans){
        if(c.first=="removeMin")
            cout<<"removeMin\n";
        else{
            cout<<c.first<<" "<<c.second<<"\n";
        }
    }
}