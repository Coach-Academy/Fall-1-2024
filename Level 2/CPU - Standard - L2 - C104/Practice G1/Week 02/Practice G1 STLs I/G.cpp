
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
    int n,m;
    cin>>n>>m;
    vector<int>vec1(n);
    for(int i=0;i<n;i++)
        cin>>vec1[i];
    deque<int>deq;
    for(int i=0;i<n;i++)
        deq.push_back(i);
    while (deq.size()>1){
        vec1[deq.front()]-=m;
        if(vec1[deq.front()]>0){
            int idx=deq.front();
            deq.pop_front();
            deq.push_back(idx);
        }
        else{
            deq.pop_front();
        }
    }
    cout<<deq.front()+1;

}