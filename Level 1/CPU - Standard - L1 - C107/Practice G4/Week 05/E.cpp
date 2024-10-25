#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s; getline(cin, s);
    string t;
    for(int i = 0 ; i < s.size() ; i++){
        if(isalpha(s[i])){
            bool ok = 1;
            for(int j = 0 ; j < t.size() ; j++){
                if(s[i]==t[j]){
                    ok = 0;
                    break;
                }
            }
            if(ok)
                t.push_back(s[i]);
        }
    }
    cout<<t.size();
    return 0;
}
