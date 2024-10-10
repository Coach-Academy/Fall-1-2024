#include <bits/stdc++.h>
 
using namespace std;

int32_t main(){

    int n, max = 0, min=101, min_index=0,max_index=0,ctr=0;
    cin >> n;
    int a[n];

    for (int i=0;i<n;i++) {
        cin >> a[i];
    }

    for (int i=0;i<n;i++) {
        if (a[i]>max) {
            max = a[i];
            max_index=i;
        }

        if(a[i]<=min) {
            min=a[i];
            min_index=i;
        }
    }

    ctr+=max_index;
    if (max_index > min_index) {
        min_index++;
    }
    
    ctr+=((n-1)-min_index);
    cout << ctr;
 
    return 0;
}