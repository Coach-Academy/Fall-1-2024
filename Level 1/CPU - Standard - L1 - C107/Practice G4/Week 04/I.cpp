#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>>n;
    int arr[n+5];
    for(int i = 1 ; i <= n ; i++){
        cin>>arr[i];
    }
    int m; cin>>m;
    while(m--){
        int x, y; cin>>x>>y;
        if(x>1) arr[x-1]+=(y-1);
        if(x<n) arr[x+1]+=arr[x]-y;
        arr[x] = 0;
    }
    for(int i = 1 ; i <= n  ; i++){
        cout<<arr[i]<<'\n';
    }
    return 0;
}
