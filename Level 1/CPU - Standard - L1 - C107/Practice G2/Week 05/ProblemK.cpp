#include <iostream>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int a[26];
    for(int i=0 ; i<26 ; i++)a[i]=0;

    for(int i=0 ; i<n ; i++){
        int idx;
        if(s[i] >= 'A' && s[i]<='Z') {
            idx = s[i]-'A';
        }
        else idx = s[i]-'a';

        a[idx] = 1;
    }
    // 1, 1, 1, 1, 1, 1, 0, 
    string ans = "YES";
    for(int i=0 ; i<26 ;i++){
        if(a[i] == 0){
            ans = "NO";
            break;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}