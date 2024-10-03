#include <bits/stdc++.h>
 
using namespace std;

int32_t main(){

    int n;
    cin >> n;

    int curr_level = 1;
    
    while(n - (curr_level * (curr_level + 1) / 2) >= 0){
        n -= (curr_level * (curr_level + 1) / 2);
        curr_level++;
    }

    cout << curr_level - 1;

    return 0;
}