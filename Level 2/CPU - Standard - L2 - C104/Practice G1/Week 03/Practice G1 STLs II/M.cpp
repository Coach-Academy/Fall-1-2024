
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
    int q;
    cin>>q;
    queue<int>two;
    priority_queue<pair<int,int>>three;
    map<int,bool>taken;
    int idx=0;
    while (q--){
        int  t;
        cin>>t;
        if(t==1){
            int m;
            cin>>m;
            idx++;
            two.push({idx});
            three.push({m,-idx});
        }
        else if(t==2){
            while (taken[two.front()]==true){
                two.pop();
            }
            cout<<two.front()<<" ";
            taken[two.front()]= true;
            two.pop();
        }

        else{
            while (taken[-three.top().second]==true){
                three.pop();
            }
            cout<<-three.top().second<<" ";
            taken[-three.top().second]=true;
            three.pop();
        }
    }

}