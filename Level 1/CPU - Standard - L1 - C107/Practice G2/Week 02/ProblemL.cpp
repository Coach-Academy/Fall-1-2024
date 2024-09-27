#include <iostream>

using namespace std;

int main(){
    int l;

    cin>>l;

    if(l<40) cout<<40-l;
    else if(l<70) cout<<70-l;
    else if(l<90) cout<<90-l;
    else cout<<"expert";
    
    return 0;
}