#include <bits/stdc++.h>

using namespace std;

long long solve(long long n, long long m)
{
    if (n <= m)
    {
        return 1;
    }

    return solve(n / 2, m) + solve(n - n / 2, m);
}

int main()
{

    long long n, m;

    while (cin >> n >> m)
    {
        if (m == 1)
        {
            cout << n << "\n";
            continue;
        }
        cout << solve(n, m) << "\n";
    }
    return 0;
}