#include <iostream>

using namespace std;

int main(){
    int a,b,c;

    cin>>a>>b>>c;
    int x = a-b;

    if(x>0) cout<<"Takahashi"; //a>b
    else if(x<0) cout<<"Aoki"; //a<b
    else {
        if(c==0) cout<<"Aoki";
        else cout<<"Takahashi";
    }
    // if(c==0){
    //     if(a>b) cout<<"Takahashi";
    //     else cout<<"Aoki";
    // } else {
    //     if(b>a) cout<<"Aoki";
    //     else cout<<"Takahashi";
    // }
    
    return 0;
}