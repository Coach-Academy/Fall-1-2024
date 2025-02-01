
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
        int ans=n-1;
        int fir=1,sec=n-1;
        for(int i=2;i*i<=n;i++){
                if(n%i==0){
                    if(n-i<ans) {
                        ans = min(ans, n - i);
                        fir=i,sec=n-i;
                    }
                    if(n-(n/i)<ans) {

                        ans = min(ans, n - (n / i));
                        fir=n/i, sec=n-(n/i);
                    }
                }
        }
        cout<<fir<<" "<<sec<<"\n";
    }

}