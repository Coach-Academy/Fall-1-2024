#include <iostream>

using namespace std;

const int N = 1e5+1;
string arr[N];

int main(){
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++){
    	cin>>arr[i];
    }
    
    int ans = 1;
    for(int i=1 ; i<n ; i++){
    	if(arr[i]!=arr[i-1]) ans++;
    }
    
    cout<<ans<<'\n';
}
