#include <iostream>

using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() > 10)
            cout << s.front() << s.size()-2 << s.back() << '\n';
        else
            cout << s << '\n';
    }
    return 0;
}