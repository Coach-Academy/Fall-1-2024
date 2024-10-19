
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
//#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
//#endif
    int n;
    cin>>n;
    vector<int>vec1(n);
    for(int i=0;i<n;i++)
        cin>>vec1[i];
    std::sort(vec1.begin(), vec1.end());
    int start=0,end=0;
    int cnt=0;
    while (end<n){
        while (vec1[end]>2*vec1[start]){
            start++;
        }
        cnt=max(cnt,end-start+1);
        end++;
    }
    cout<<n-cnt<<"\n";

}