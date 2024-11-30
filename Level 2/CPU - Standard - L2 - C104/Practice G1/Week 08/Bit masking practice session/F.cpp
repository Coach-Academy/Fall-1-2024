
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
    string a,b;
    cin>>a>>b;
    int wanted=0;
    for(auto c:a)
        if(c=='+')
            wanted++;
        else
            wanted--;
    int numofbits=0;
    int have=0;
    for(auto c:b){
        if(c=='+')
            have++;
        else if(c=='-')
            have--;
        else
            numofbits++;
    }
    long double validmasks=0;
    for(int i=0;i<(1<<numofbits);i++){
        int temp=0;
        for(int j=0;j<numofbits;j++){
            if((i>>j)&1)
                temp++;
            else
                temp--;
        }
        if(have+temp==wanted)
            validmasks++;
    }
    cout<<fixed<<setprecision(10);
    cout<<validmasks/(1<<numofbits);

}