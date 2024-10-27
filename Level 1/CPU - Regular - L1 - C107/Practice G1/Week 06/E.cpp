#include <iostream>

using namespace std;

int main()
{

    int n, k, x;
    cin >> n >> k >> x;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;

    for (int i = 0; i < n - k; i++)
    {
        sum += a[i];
    }

    for (int i = n - k; i < n; i++)
    {
        sum += x;
    }

    cout << sum << endl;
}