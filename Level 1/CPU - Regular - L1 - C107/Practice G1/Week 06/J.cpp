#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int p[n], q[n];

    for (int i = 0; i < n; i++)
        cin >> p[i];

    for (int i = 0; i < n; i++)
        cin >> q[i];

    int org[n];
    for (int i = 0; i < n; i++)
        org[i] = i + 1;

    int a = 0, b = 0;

    do
    {
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (org[i] != p[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            break;
        }
        a++;
    } while (next_permutation(org, org + n));

    for (int i = 0; i < n; i++)
        org[i] = i + 1;

    do
    {

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (org[i] != q[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            break;
        }
        b++;
    } while (next_permutation(org, org + n));

    cout << abs(a - b) << endl;
}
