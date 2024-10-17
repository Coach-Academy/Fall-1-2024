#include <bits/stdc++.h>
 
using namespace std;
 
#define fixed(n) fixed << setprecision(n)
#define dl "\n"
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000
#define Mod 1000000007

void Solve() {
    string s; cin >> s;

    bool isPal = false;
    int l = 0 , r = s.size() - 1;
    while(l < r) {
        if(s[l] != s[r])
            break;

        l++, r--;
    }

    if(l >= r)
        isPal = true;

    for(int i=0; i<10; i++){
        s = "0" + s;

        int l = 0 , r = s.size() - 1;
        while(l < r) {
            if(s[l] != s[r])
                break;

            l++, r--;
        }

        if(l >= r)
            isPal = true;
    }
    
    if(isPal)
        cout << "Yes" << dl;
    else 
        cout << "No" << dl;
}  

int32_t main(){
    
    int testCases = 1;
    // cin >> testCases;
    
    for(int t = 1; t<=testCases; t++){
        // cout << "set #" << t << ": " << dl;
        Solve();
    }
 
    return 0;
}