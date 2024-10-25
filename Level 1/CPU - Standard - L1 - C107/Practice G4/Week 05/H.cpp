#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    for(int i = 0 ; i < s.size() ; i++){
        int n = s[i]-'0';
        if(i==0 && n==9) cout<<n;
        else{
            if(9-n > n) cout<<n;
            else cout<<9-n;
        }
    }
    return 0;
}
