#include <iostream>

using namespace std;


int main(){
    
    int x;
    cin >> x;

    int ans = 0;

    ans += x / 5;
    x %= 5;

    ans += x / 4;
    x %= 4;

    ans += x / 3;
    x %= 3;

    ans += x / 2;
    x %= 2;

    ans += x;

    cout << ans;

    return 0;
}