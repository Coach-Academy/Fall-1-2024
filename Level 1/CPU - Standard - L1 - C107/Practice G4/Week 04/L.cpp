#include <bits/stdc++.h>
using namespace std;


int main()
{
    for(int i = 1 ; ; i++){
        int n; cin>>n;
        if(n==0) break;
        int arr[n+5];
        int sum = 0;
        for(int j = 0 ; j < n ; j++){
            cin>>arr[j];
            sum+=(arr[j]);
        }
        int avg = sum/n, ans = 0;
        for(int j = 0 ; j < n ; j++){
            if(arr[j]>avg)
                ans+=(arr[j]-avg);
        }
        cout<<"Set #"<<i<<'\n'<<
        "The minimum number of moves is "<<ans<<".\n\n";
    }
    return 0;
}
