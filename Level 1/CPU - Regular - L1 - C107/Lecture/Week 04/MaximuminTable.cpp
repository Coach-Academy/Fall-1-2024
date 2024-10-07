#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int arr[n][n]{};

    // fill the first row with 1,
    // i=0; ?
    for (int j = 0; j < n; j++)
    {
        arr[0][j] = 1;
    }

    // first coloum means j = 0,
    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
    }
    // i = 1, j = 1,

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }

    cout << arr[n - 1][n - 1] << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)

    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }
}