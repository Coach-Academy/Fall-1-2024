#include <bits/stdc++.h>

using namespace std;

int32_t main(){

    string s;
    cin >> s;

    int ans = 0;

    if(s[0] == 'R' or s[1] == 'R' or s[2] == 'R') // check if 'R' appear atleast one time
        ans++;

    if(s[0] == 'R' and s[0] == s[1]) // check if there is two consecutive 'R' at index 0 and 1
        ans++;

    if(s[1] == 'R' and s[1] == s[2]) // check if there is two consecutive 'R' at index 1 and 2
        ans++;

    cout << ans;

    return 0;
}