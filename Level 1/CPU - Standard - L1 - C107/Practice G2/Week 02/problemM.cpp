#include <iostream>

using namespace std;

int main(){
    long long v,t,s,d;

    cin>>v>>t>>s>>d;

    // if(v*t<=d && d<=v*s) cout<<"No";
    // else cout<<"Yes";
    float time = ((float)d)/v;

    if(time>=t && time<=s) cout<<"No";
    else cout<<"Yes";
    

    
    return 0;
}