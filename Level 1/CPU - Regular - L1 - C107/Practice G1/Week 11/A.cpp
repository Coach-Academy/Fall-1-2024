#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long fib[31];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < 31; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int n;
    cin >> n;

    cout << fib[n] << endl;
}