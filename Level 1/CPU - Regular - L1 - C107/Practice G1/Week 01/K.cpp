#include <iostream>

using namespace std;

int main(){
    
    double l , p , q;
    cin >> l >> p >> q;

    double ans = l - (q / (p + q) * l);
    cout << ans;

    return 0;
}