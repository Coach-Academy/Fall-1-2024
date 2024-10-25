#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k; cin>>n>>k;
    int ans = 0;
    while(n--){
        string s; cin>>s;
        bool freq[15]{0};
        for(int i = 0 ; i < s.size() ; i++){
            freq[s[i]-'0'] = 1;
        }
        bool ok = 1;
        for(int i = 0 ; i <= k ; i++){
            if(freq[i]==0){
                ok = 0;
                break;
            }
        }
        if(ok) ans++;
    }
    cout<<ans;
    return 0;
}
