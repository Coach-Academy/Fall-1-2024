#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n+5], b[n+5];
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin>>b[i];
        }
        sort(a, a+n);
        sort(b, b+n);
        int i = 0, j = n-1;
        if(a[i]<b[j]){
            while(k--){
                a[i] = b[j];
                b[j] = a[i];
                i++; j--;
                if(b[j]<=a[i]) break;
            }
        }
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum+=a[i];
        }
        cout<<sum<<'\n';
    }
    return 0;
}
