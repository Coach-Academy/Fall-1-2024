#include <bits/stdc++.h>
 
using namespace std;

int32_t main(){

    int n, set_count = 1;

    while(cin >> n and n != 0) {
        cout << "Set #" << set_count++ << '\n';

        int h[n];
        int sum=0, box_per_stack=0, ctr=0;

        for (int i = 0; i < n; i++) {
            cin >>h[i];
            sum += h[i];
        }

        box_per_stack = sum / n;

        for (int i = 0; i < n; i++) {
            if (h[i]<box_per_stack) {
                ctr += (box_per_stack-h[i]);
            }
        }
        cout << "The minimum number of moves is " << ctr << "." << '\n' << '\n';
    }
 
    return 0;
}