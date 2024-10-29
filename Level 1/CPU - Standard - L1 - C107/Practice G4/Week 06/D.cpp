#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int arr[N];
int main()
{
    long long n, m; cin>>n>>m;
    for(int i = 0 ; i < n ; i++){
        long long a, b;
        cin>>a>>b;
        m-=a;
        arr[i] = (a-b);
    }
    if(m>=0){
        cout<<0;
    }
    else{
        sort(arr, arr+n);
        for(int i = n-1 ; i >= 0  ; i--){
            m+=arr[i];
            if(m>=0){
                cout<<n-i;
                return 0;
            }
        }
        cout<<-1;
    }
    return 0;
}
