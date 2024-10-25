#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s, t; cin>>s>>t;
        bool ok = 0;
        for(int i = 0 ; i < s.size() ; i++){
            string l = s.substr(0, i+1);
            string r = s.substr(0, i);
            reverse(r.begin(), r.end());
            l+=r;
            if(l.find(t)!=-1){
                ok = 1;
                break;
            }
        }
        if(ok)
            cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}
