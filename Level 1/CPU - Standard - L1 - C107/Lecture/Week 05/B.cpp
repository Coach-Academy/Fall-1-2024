#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    int n = (int) s.size();
    bool flag = false;
    while(n--){
        string t = s;
        reverse(t.begin(),t.end());
        if(s == t){
            flag = true;
            break;
        }
        s = "0" + s;
    }
    cout << ((flag) ? "Yes" : "No") << '\n';
    return 0;
}