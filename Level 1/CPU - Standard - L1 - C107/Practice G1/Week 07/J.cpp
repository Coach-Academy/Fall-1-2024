#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long x;
    cin >> x;

    long long s = 0;

    for (int i = 0; i < n; i++)
    {
        s += a[i];
    }

    long long k = x / s;

    long long ans = k * n;

    long long curSum = k * s;

    long long I = 0;

    for (int i = 0; i < n; i++)
    {
        I += a[i];
        ans++;
        if (curSum + I > x)
        {
            cout << ans << endl;
            return 0;
        }
    }
}