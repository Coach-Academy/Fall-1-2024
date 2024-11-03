
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
int x;
bool rec(int idx,vector<int>&vec1,int sum){
    //base case
    if(idx==vec1.size()){
        if(sum==x)
            return true;
        else
            return false;
    }

    return (rec(idx+1,vec1,sum+vec1[idx])||rec(idx+1,vec1,sum));
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
            cin>>x;
            int n;
            cin>>n;
            vector<int>vec1(n);
            for(int i=0;i<n;i++)
                cin>>vec1[i];
            bool ans=rec(0,vec1,0);
            if(ans== true)
                cout<<"YES\n";
            else
                cout<<"NO\n";

    }

}