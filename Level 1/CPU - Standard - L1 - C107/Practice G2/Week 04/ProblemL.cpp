#include <iostream>

using namespace std;

int main(){
    int n, setNum=1;
    while(cin>>n && n!=0){
        int arr[n],sum=0;
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
            sum+=arr[i];
        }

        int standard = sum/n;

        int moves = 0;

        for(int i = 0 ; i<n ;i++){
            if(arr[i]>standard) moves+= (arr[i]- standard);
        }
        cout<<"Set #"<<setNum++<<'\n';
        cout<<"The minimum number of moves is "<<moves<<".\n\n";
    }
}