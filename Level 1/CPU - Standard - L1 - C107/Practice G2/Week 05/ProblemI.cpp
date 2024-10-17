#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int mn=26,mx=0;
        int a[26] = {0};

        string s;
        cin>>s;

        int len = s.length();
        bool f = true;
        for(char c : s){
            int pos = c - 'a';
            if(a[pos]>0){
                f = false;
                break;
            }
            a[pos]++;
            mn = ((mn<pos) ? mn : pos);
            mx = ((mx>pos) ? mx : pos);
        }

        if(f && (mx-mn+1)==len ) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;


    }
    return 0;
}