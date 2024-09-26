#include <bits/stdc++.h>

using namespace std;

int32_t main(){

    int a, b, c;
    cin >> a >> b >> c;

    if(c == 0 and a > b) {
        cout << "Takahashi";
    }
    else if(c == 1 and a >= b) {
        cout << "Takahashi";
    }
    else {
        cout << "Aoki";
    }

    return 0;
}