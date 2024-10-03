#include <bits/stdc++.h>
 
using namespace std;

int32_t main(){

    int n = 5;
    int x = 0 , y = 0;
 
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int num; cin >> num;
            if(num == 1)
                x = i , y = j;
        }
    }
 
    cout << abs(2 - x) + abs(2 - y);
 
    return 0;
}