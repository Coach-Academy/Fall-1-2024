#include <bits/stdc++.h>
 
using namespace std;

int32_t main(){

    int n = 3;
    int state[n][n];

    // bonus : search for memset()

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ // 9
            state[i][j] = 1;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ // 9
            int x;
            cin >> x;

            if(x % 2 == 1){
                state[i][j] = 1 - state[i][j];
                if(i - 1 >= 0)
                    state[i - 1][j] = 1 - state[i - 1][j];
                if(j + 1 < n)
                    state[i][j + 1] = 1 - state[i][j + 1];
                if(i + 1 < n)
                    state[i + 1][j] = 1 - state[i + 1][j];
                if(j - 1 >= 0)
                    state[i][j - 1] = 1 - state[i][j - 1];
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){ // 9
            cout << state[i][j];
        }
        cout << '\n';
    }
 
    return 0;
}