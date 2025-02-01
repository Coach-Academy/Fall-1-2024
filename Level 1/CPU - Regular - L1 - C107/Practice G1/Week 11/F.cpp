#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    long long ans = 0;
    
    for (int i = 0; i < n; i++)
    {
        ans += a[i] * b[i];
    }
    if (ans == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    else
    {
        cout << "No" << endl;
        return 0;
    }
    return 0;
}