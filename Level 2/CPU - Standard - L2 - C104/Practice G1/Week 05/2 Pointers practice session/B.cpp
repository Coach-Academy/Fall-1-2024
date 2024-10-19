
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
    vector<int>vec1(n);
    for(int i=0;i<n;i++)
        cin>>vec1[i];
    int seraj=0,dima=0;
    int l=0,r=n-1;
    int cnt=0;
    //l<=r
    while (r>=l){
        if(cnt%2==0){
            if(vec1[l]>vec1[r]){
                seraj+=vec1[l];
                l++;
            }
            else{
                seraj+=vec1[r];
                r--;
            }
        }
        else{
            if(vec1[l]>vec1[r]){
                dima+=vec1[l];
                l++;
            }
            else{
                dima+=vec1[r];
                r--;
            }
        }
        cnt++;
    }
    cout<<seraj<<" "<<dima<<"\n";

}