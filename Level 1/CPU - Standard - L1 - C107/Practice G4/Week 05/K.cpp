#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    for(char ch = 'a' ; ch <= 'z' ; ch++){
        bool ok = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i]==ch || s[i]+32==ch){
                ok = 1;
                break;
            }
        }
        if(!ok){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}
