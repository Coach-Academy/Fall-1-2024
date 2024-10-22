#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mn = min(mn, x);
    }
    cout << (mn == 1 ? -1 : 1) << '\n';
    return 0;
}