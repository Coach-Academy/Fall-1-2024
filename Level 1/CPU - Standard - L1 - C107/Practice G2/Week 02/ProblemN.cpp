#include <iostream>

using namespace std;

int main(){
    char a,b,c;

    cin>>a>>b>>c;
    
    if(a==b && b==c && a=='R') cout<<3;
    else if(a==b && b==c && c=='S') cout<<0;
    else if((a==b && a=='R') || (b==c && b=='R')) cout<<2;
    else cout<<1;

    
    return 0;
}