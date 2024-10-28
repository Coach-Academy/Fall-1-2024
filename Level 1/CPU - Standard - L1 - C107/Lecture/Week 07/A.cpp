#include <iostream>

using namespace std;


int main() {
    //o (n)
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
        sum += i;
    // o(1)
    // sum = n * (n+1) / 2;
    cout << sum << '\n';
    return 0;
}