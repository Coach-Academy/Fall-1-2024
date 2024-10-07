#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        int a[n];
        int b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        while (k--)
        {
            int min = a[0];
            int indexOfMin = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < min)
                {
                    min = a[i];
                    indexOfMin = i;
                }
            }

            int max = b[0];
            int indexOfMax = 0;
            for (int i = 0; i < n; i++)
            {
                if (max < b[i])
                {
                    max = b[i];
                    indexOfMax = i;
                }
            }

            if (min < max)
            {
                a[indexOfMin] = max;
                b[indexOfMax] = min;
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }
}