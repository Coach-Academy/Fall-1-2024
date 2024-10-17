#include <bits/stdc++.h>
 
using namespace std;
 
#define fixed(n) fixed << setprecision(n)
// #define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define dl "\n"
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000
#define Mod 1000000007

void Solve() {
    string s;
    getline(cin, s);
    // search for cin.ignore()
    int arr[26] = {0}, cnt = 0;

    for(int i=0; i<s.size(); i++){
        if(s[i] >= 97 and s[i] <= 122){
            
            if(arr[s[i] - 'a'] != 0)
                continue;

            arr[s[i] - 'a'] = 1;
            cnt++;
        }
    }

    cout << cnt << dl;
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