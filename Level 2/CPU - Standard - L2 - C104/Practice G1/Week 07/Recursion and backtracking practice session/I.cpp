
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
vector<vector<int>>grid(9,vector<int>(9));
vector<vector<bool>>queen(9,vector<bool>(9));

bool valid(int r,int c){
        for(int i=r-1;i>=1;i--){
            if(queen[i][c])
                return false;
        }
        for(int i=r-1,j=c-1;i>=1&&j>=1;i--,j--){
            if(queen[i][j])
                return false;
        }
        for(int i=r-1,j=c+1;i>=1&&j<=8;i--,j++){
            if(queen[i][j])
                return false;
        }

    return true;
}
int go(int row){
    // base case
    if(row==9)
        return 0;
    int mx=-1e9;
    for(int column=1;column<=8;column++){
        if(valid(row,column)){
            queen[row][column]=true;
            mx=max(mx,grid[row][column]+go(row+1));
            queen[row][column]=false;
        }
    }
    return mx;

}
int main() {
     FAST
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while (t--){
        for(int i=1;i<=8;i++)
            for(int j=1;j<=8;j++)
                cin>>grid[i][j];
        int ans=go(1);
        string str= to_string(ans);
        int diff=5-(int)str.size();
        while (diff--)
            cout<<" ";
        cout<<ans<<"\n";
    }

}