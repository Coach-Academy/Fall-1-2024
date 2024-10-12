#include <iostream>
using namespace std;
int n, a[11][11];
int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        a[0][i] = 1;

    for (int i = 0; i < n; i++)
        a[i][0] = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[i][j] = a[i][j - 1] + a[i - 1][j];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << a[i][j] << " ";
    //     cout << endl;
    // }

    cout << a[n - 1][n - 1];
}