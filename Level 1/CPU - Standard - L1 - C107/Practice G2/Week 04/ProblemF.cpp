#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	int a[n];
    	
    	for(int i=0 ; i<n ; i++){
    		cin>>a[i];
    	}
    	int b=0;
    	int mn = a[n-1];
    	
    	for(int i=n-2 ; i>=0 ; i--){
    		if(a[i]>mn)b++;
    		else mn=a[i];
    	}
    	cout<<b<<'\n';
    }
    
}
