
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
    while (q--){
        string s;
        cin>>s;
        if(s=="insert"){
            int x;
            cin>>x;
            ans.push_back({"insert",x});
            pq.push(x);

        }
        else if (s=="getMin"){
            int x;
            cin>>x;
            if(pq.empty()){
                ans.push_back({"insert",x});
                pq.push(x);
                ans.push_back({"getMin",x});
                continue;
            }

                while (!pq.empty()&&pq.top()<x){
                    ans.push_back({"removeMin",INT_MAX});
                    pq.pop();
                }
                if(pq.empty()||pq.top()!=x){
                    ans.push_back({"insert",x});
                    pq.push(x);
                }
                ans.push_back({"getMin",x});



        }
        else if(s=="removeMin"){
            if(pq.empty()){
                ans.push_back({"insert",21});
                pq.push(21);
            }
            ans.push_back({"removeMin",INT_MAX});
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