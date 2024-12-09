#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<string,int> mp;
        while(n--){
            string s;
            cin >> s;
            if(mp.find(s) == mp.end())
                cout << "OK" << endl;
            else
                cout << s << mp[s] << endl;
            mp[s]++;
        }
    }
    return 0;
}