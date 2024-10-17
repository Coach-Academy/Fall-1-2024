#include <iostream>

using namespace std;

int main(){
    int q;
    string s,t;

    cin>>q;
    while(q--){
        cin>>s>>t;
        bool found = false;
        string res = "";
        for(int i=0 ; i<s.size() ; i++){
            res = "";
            for(int j = 0 ; j<=i ; j++) res+=s[j];
            for(int j = i-1 ; j>=0; j--) res+=s[j];
            // cerr<<res<<endl;
            string tmp = "";
            for(int j=0 ; j<res.size() ; j++){
                tmp = "";
                for(int idx = j ; idx<res.size() ; idx++){
                    tmp+=res[idx];

                    // cerr<<tmp<<endl;
                    if(tmp == t){
                        found = true;
                        break;
                    }
                }
                if(found) break;
            }
        }

        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}