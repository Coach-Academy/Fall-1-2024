#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, sum = 0; cin>>n;
    long long arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cin>>x;
    long long Csum = 0, r = x/sum;
    Csum = r*sum;
    long long k = r*n;
    for(int i = 0 ; i < n ; i++){
        Csum+=arr[i];
        k++;
        if(Csum > x){
            cout<<k;
            return 0;
        }
    }
    return 0;
}
