#include <bits/stdc++.h>
using namespace std;
const int N = 15;
int per[N], p[N], q[N];

int main()
{
    int n; cin>>n;
    for(int i = 0 ; i < n ; i++){
        per[i] = i+1;
    }
    for(int i = 0 ; i < n ; i++){
        cin>>p[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>q[i];
    }
    int first, second, idx = 0;
    do{
        if(equal(per, per+n, p))
            first = idx;
        if(equal(per, per+n, q))
            second = idx;
        idx++;
    }while(next_permutation(per, per+n));
    cout<<abs(first-second);
    return 0;
}
