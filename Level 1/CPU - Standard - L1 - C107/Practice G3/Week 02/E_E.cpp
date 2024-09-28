#include <iostream>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long x = (n + a - 1) / a;

    // if (n % a) // 5% 3
    // {
    //     // x++;
    //     x = n / a + 1;
    // }

    long long y = (m + a - 1) / a;

    // if (m % a != 0)
    // {
    //     y = m / a + 1;
    // }

    cout << x * y;
}