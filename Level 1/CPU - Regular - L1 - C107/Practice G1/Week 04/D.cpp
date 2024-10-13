#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min = a[n - 1];
        int bad = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > min)
            {
                bad++;
            }

            if (a[i] < min)
            {
                min = a[i];
            }
        }
        // 1 second => 10^9 operations

        // n * n
        // 150000 * 150000 = 22500000000 = 22 * 10^9

        cout << bad << "\n";
    }

    return 0;
}