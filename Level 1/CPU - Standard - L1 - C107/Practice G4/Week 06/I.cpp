#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int capacity = 0, mx = 0;
    for(int i = 0 ; i < n ; i++){
        int a, b; cin>>a>>b;
        capacity-=a;
        capacity+=b;
        mx = max(mx, capacity);
    }
    cout<<mx;
    return 0;
}
