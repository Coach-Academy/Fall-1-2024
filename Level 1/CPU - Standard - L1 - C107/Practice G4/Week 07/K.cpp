#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; cin>>n>>x;
    for(int i = 0 ; i < n ; i++){
        int a, b; cin>>a>>b;
        if(a==x || a==7-x || b==x || b==7-x){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
