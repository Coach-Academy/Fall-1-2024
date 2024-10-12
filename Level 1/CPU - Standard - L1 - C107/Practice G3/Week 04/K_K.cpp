#include <iostream>
using namespace std;
int a[5][5], x;
int main()
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cin >> x;
            if (x % 2)
            {
                a[i][j]++;
                a[i][j + 1]++;
                a[i][j - 1]++;
                a[i - 1][j]++;
                a[i + 1][j]++;
            }
        }
    }

    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            cout << (a[i][j] % 2 ? 0 : 1);
        }
        cout << endl;
    }
}