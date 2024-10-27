#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    int c[n];
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }

    sort(c, c + n, greater<int>()); // From largest to smallest

    int compresed = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum <= m)
            break;
        else
        {
            sum -= c[i];
            compresed++;
        }
    }

    if (sum > m)
        cout << -1 << endl;
    else
        cout << compresed << endl;
}