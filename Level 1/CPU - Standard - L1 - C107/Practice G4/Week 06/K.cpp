#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n+5];
    int mn = INT_MAX, mx = INT_MIN, mni = 0, mxi = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i]>mx) mxi = i, mx = arr[i];
        if(arr[i]<=mn) mni = i, mn = arr[i];
    }
    cout<<mxi + (n-1-mni) - (mxi>mni);
    return 0;
}
