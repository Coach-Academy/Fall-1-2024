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
        // k operations to make

        while (k--)
        {
            int min_in_a = 0;
            int max_in_b = 0;

            for (int i = 0; i < n; i++)
            {
                if (a[i] < a[min_in_a]) // index not a value
                {
                    min_in_a = i;
                }

                if (b[i] > b[max_in_b])
                {
                    max_in_b = i;
                }
            }

            // check if the min in a is less than max in b

            if (a[min_in_a] < b[max_in_b])
            {
                // swap all algorithm
                int temp = a[min_in_a];
                a[min_in_a] = b[max_in_b];
                b[max_in_b] = temp;
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }

        cout << sum << endl;
    }

    return 0;
}