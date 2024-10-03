#include <bits/stdc++.h>
 
using namespace std;

int32_t main(){

    int n;
    cin >> n; // 16

    for (int i=1; i<=n; i++) {
        // check if i is lucky
        int curr = i;
        bool is_lucky = true;
        while(curr != 0) {
            if(curr % 10 != 4 and curr % 10 != 7) {
                is_lucky = false;
                break;
            }
            curr /= 10;
        }

        if(is_lucky and n % i == 0){
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
 
    return 0;
}