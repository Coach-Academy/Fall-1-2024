
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
    int n;
    cin>>n;
    vector<string>vec1(n);
    for(int i=0;i<n;i++)
        cin>>vec1[i];
    map<string,bool>taken;
    vector<string>ans;
    for(int i=n-1;i>=0;i--){
        if(taken[vec1[i]])
            continue;
        ans.push_back(vec1[i]);
        taken[vec1[i]]= true;
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<"\n";

}