#include <bits/stdc++.h>
 
using namespace std;
 
#define fixed(n) fixed << setprecision(n)
#define dl "\n"
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000
#define Mod 1000000007

void Solve() {
    string b; cin >> b;
    
    for(int i=2; i<b.length(); i++) {
        b.erase(i, 1);
    }

    cout << b << dl;
}  

int32_t main(){
    
    int testCases = 1;
    cin >> testCases;
    
    for(int t = 1; t<=testCases; t++){
        // cout << "set #" << t << ": " << dl;
        Solve();
    }
 
    return 0;
}