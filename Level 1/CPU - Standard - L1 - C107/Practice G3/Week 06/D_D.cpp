#include <bits/stdc++.h>
using namespace std;
long long n, difference[int(1e5) + 1], have, need, before, after;
int main()
{
    cin >> n >> have;

    for (int i = 0; i < n; i++)
    {
        cin >> before >> after;
        difference[i] = before - after;
        need += before;
    }

    sort(difference, difference + n, greater<>());

    if (need <= have)
    {
        cout << "0\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        need -= difference[i];

        if (need <= have)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout << "-1\n";
}