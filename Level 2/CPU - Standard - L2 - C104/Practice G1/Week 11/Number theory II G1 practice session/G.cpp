
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
#include <numeric>
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
        int n;
        cin>>n;
        vector<int>vec1(n);
        int mn=1e9;
        bool allTheSAME=true;
        for(int i=0;i<n;i++) {
            cin >> vec1[i];
            mn=min(vec1[i],mn);
            if(vec1[i]!=vec1[0])
                allTheSAME=false;
        }
        if(allTheSAME)
            cout<<-1<<"\n";
        else{
            int g=0;
            for(auto c:vec1)
                g=gcd(g,c-mn);
            cout<<g<<"\n";
        }
    }

}