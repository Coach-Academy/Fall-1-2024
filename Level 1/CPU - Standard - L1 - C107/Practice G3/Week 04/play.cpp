#include <iostream>
using namespace std;
int n, k, a[50];
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++) // 0 2 0 4 0
        a[i] = i + 1;

    int p = 0;
    for (int i = 0; i < n - 1; i++) // 0 1 2 3 4
    {
        for (int j = 0; j < k - (a[p] != 0);)
        {
            if (a[p] != 0)
                j++;

            p = (p + 1) % n;
        }
        // cerr << p << endl;
        a[p] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << endl;
            break;
        }
    }
}