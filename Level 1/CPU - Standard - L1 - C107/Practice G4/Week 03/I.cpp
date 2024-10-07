#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int i = 0, sum = 0;
    while(sum<=n){
        i++;
        sum+=(i*(i+1))/2;
    }
    cout<<i-1;
    return 0;
}
