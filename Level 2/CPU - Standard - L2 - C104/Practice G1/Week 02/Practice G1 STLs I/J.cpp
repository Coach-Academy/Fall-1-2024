
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
        int n;
        cin>>n;
        vector<int>vec1(n);
        vector<int>index(n+1);
        for(int i=0;i<n;i++) {
            cin >> vec1[i];
            index[vec1[i]] = i;
        }

        vector<int>ans;
        for(int i=n;i>=1;i--){
            if(index[i]>=vec1.size())
                continue;
            for(int j=index[i];j<vec1.size();j++)
                ans.push_back(vec1[j]);
            int k=vec1.size()-index[i];
            while (k--)
                vec1.pop_back();




        }
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }

}