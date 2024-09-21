#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;

    int result = n / 100; // 5612 / 100 => 56.12 => 56
    int rem = n % 100;    // 5612 - 56 * 100 => 12  || 5612 % 100 = 12
    ans = ans + result;

    result = rem / 20;
    rem = rem % 20;
    ans = ans + result;

    result = rem / 10;
    rem = rem % 10;
    ans = ans + result;

    result = rem / 5;
    rem = rem % 5;
    ans = ans + result;

    ans = ans + rem;

    cout << ans << "\n";

    return 0;
}