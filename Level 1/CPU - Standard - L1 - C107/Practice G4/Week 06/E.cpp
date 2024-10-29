#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int arr[N];
int main()
{
    int n, k, x, sum = 0; cin>>n>>k>>x;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    for(int i = n-1 ; i >= 0  ; i--){
        if(arr[i]<x||k<=0)
            break;
        sum-=arr[i];
        sum+=x;
        k--;
    }
    cout<<sum;
    return 0;
}
