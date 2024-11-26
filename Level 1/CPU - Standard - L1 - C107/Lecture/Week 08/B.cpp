#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    deque<int> d;
    bool rev = false;
    while(q--){
        string s;
        cin >> s;
        if(s == "push_back"){
            int x; cin >> x;
            if(!rev)
                d.push_back(x);
            else
                d.push_front(x);
        }
        if(s == "toFront"){
            int x; cin >> x;
            if(!rev)
                d.push_front(x);
            else
                d.push_back(x);
        }
        if(s == "front"){
            if(d.empty()){
                cout << "No job for Ada?" << '\n';
                continue;
            }
            if(!rev){
                cout << d.front() << '\n';
                d.pop_front();
            } else {
                cout << d.back() << '\n';
                d.pop_back();
            }
        }
        if(s == "back"){
            if(d.empty()){
                cout << "No job for Ada?" << '\n';
                continue;
            }
            if(!rev){
                cout << d.back() << '\n';
                d.pop_back();
            } else {
                cout << d.front() << '\n';
                d.pop_front();
            }
        }
        if(s == "reverse")
            rev = !rev;
    }
    return 0;
}