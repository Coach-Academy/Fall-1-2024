#include <iostream>

using namespace std;

int main(){
    float l,p,q;

    cin>>l>>p>>q;

    float time = (l)/(p+q);
    float d = time * p;

    cout<<d<<endl;
    return 0;
}