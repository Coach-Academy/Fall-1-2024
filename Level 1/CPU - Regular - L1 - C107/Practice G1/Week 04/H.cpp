#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;

    while (m--)
    {
        int y, x;
        cin >> x >> y;

        x--;

        int before = y - 1;
        int after = a[x] - y;

        a[x]--;
        if (x > 0)
        {
            a[x - 1] += before;
        }
        a[x] -= before;

        if (x < n - 1)
        {
            a[x + 1] += after;
        }
        a[x] -= after;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}