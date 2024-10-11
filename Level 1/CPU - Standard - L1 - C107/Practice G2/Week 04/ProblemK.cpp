#include <iostream>

using namespace std;

int main(){

    int arr[5][5];
    
    for(int i=0 ; i<5 ; i++)
    	for(int j=0 ; j<5 ; j++)
    		arr[i][j]=0;
    		
    for(int i=1 ; i<=3 ; i++){
    	for(int j=1 ; j<=3 ; j++){
    		cin>>arr[i][j];
    	}
    }
    
    for(int i=1 ; i<=3 ; i++){
    	for(int j=1 ; j<=3 ;j++){
    		int tmp = (arr[i][j]+arr[i-1][j] + arr[i+1][j] + arr[i][j-1] + arr[i][j+1]);
    		if(tmp%2!=0) cout<<0;
    		else cout<<1;
    	}
    	cout<<'\n';
    }
    
}
