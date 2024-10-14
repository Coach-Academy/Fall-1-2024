#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n+5];
    int ans = 1;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        if(i>0){
            if(arr[i]!=arr[i-1])
                ans++;
        }
    }
    cout<<ans;
    return 0;
}
