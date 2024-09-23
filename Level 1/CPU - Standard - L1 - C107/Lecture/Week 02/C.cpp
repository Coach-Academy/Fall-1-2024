#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b, sub = a - b, prod = a * b;
    if (sum >= sub and sum >= prod)
        cout << sum << '\n';
    else if (sub >= sum and sub >= prod)
        cout << sub << '\n';
    else
        cout << prod << '\n';
    return 0;
}