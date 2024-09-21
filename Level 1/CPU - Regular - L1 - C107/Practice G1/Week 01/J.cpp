#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;

    // Solution 1

    // int steps = 0;

    // steps += x / 5;
    // x %= 5;

    // steps += x / 4;
    // x %= 4;

    // steps += x / 3;
    // x %= 3;

    // steps += x / 2;
    // x %= 2;

    // steps += x / 1;

    // cout << steps << endl;

    // Solution 2
    // x / y => Ceil = (x + y - 1) / y;

    cout << (x + 4) / 5 << endl;
    return 0;
}