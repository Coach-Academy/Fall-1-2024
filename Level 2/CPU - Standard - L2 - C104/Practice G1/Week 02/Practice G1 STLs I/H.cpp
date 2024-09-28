
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
    int q;
    cin>>q;
    vector<string>versions;
    string s="";
    versions.push_back(s);
    while (q--){
        int type;
        cin>>type;
        if(type==1)
        {
            string w;
            cin>>w;
            s+=w;
            versions.push_back(s);
        }
        else if(type==2){
            int k;
            cin>>k;
            // s,size=5 ,starting index=s.size-2 =3,length =2
            s.erase(s.size()-k,k);
            versions.push_back(s);
        }
        else if(type==3){
            int k;
            cin>>k;
            cout<<s[k-1]<<"\n";
        }
        else if(type==4){
                versions.pop_back();
                s=versions.back();
        }
    }

}