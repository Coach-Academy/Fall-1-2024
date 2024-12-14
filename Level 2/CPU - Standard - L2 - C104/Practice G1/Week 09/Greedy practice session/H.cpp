
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
//    freopen("Input.txt", "r", stdin);
//    freopen("Output.txt", "w", stdout);
//#endif
    int n,k;
    cin>>n>>k;
    vector<int>persons(k);
    vector<int>flowers(n);
    for(int i=0;i<n;i++)
        cin>>flowers[i];
    std::sort(flowers.rbegin(), flowers.rend());
    ll totalCost=0;
    int currentPerson=0;
    for(int i=0;i<n;i++){
        totalCost+=(persons[currentPerson]+1)*flowers[i];
        persons[currentPerson]++;
        currentPerson++;
        currentPerson%=k;
    }
    cout<<totalCost;

}