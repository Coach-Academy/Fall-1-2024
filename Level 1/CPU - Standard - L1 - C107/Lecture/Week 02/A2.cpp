#include <bits/stdc++.h>

using namespace std;

int main(){
    char c;
    cin >> c;
    if(c == 'a' || c == 'e' or c == 'i' or c == 'o' || c == 'u')
        cout << "vowel" << '\n';
    else
        cout << "consonant" << '\n';
    return 0;
}