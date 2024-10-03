// #include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
 
using namespace std;


// https://www.ascii-code.com/

int32_t main(){

    int n = 26;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        cout << (char)('a' + (x - 1));
    }

    return 0;
}