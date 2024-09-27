#include <iostream>

using namespace std;

int main(){
    long long n,k;

    cin>>n>>k;

    long long odd = (n+1)/2;

    if(k<=odd){
        cout<<(2*k)-1;
    } else {
        k-=odd;
        cout<<2*k;
    }  
    
    return 0;
}