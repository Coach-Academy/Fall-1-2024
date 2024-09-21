
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

int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--) {
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        bool exist=false;
        for(int i=0;i<n;i++)
            if(arr[i]>d)
                exist=true;
        if(!exist){
            cout<<"YES\n";
        }
        else{
            sort(arr,arr+n);
            if(arr[0]+arr[1]<=d){
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";

        }
    }

}