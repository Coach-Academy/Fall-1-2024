#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    int arr[n+5];
    int mn = INT_MAX, mx = INT_MIN, mnidx = 0, mxidx = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i]>mx){
            mx = arr[i];
            mxidx = i;
        }
        if(arr[i]<=mn){
            mn = arr[i];
            mnidx = i;
        }
    }
    cout<<mxidx + (n-1-mnidx) - (mxidx>mnidx);
    return 0;
}
