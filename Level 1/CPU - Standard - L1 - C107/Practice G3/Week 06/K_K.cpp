#include <bits/stdc++.h>
using namespace std;
int n, a[102];
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mn = 1e9, imn = 0, mx = 0, imx = 0;
    for (int i = 0; i < n; i++) // 3 3 3
    {
        if (a[i] <= mn)
        {
            mn = a[i];
            imn = i;
        }

        if (a[i] > mx)
        {
            mx = a[i];
            imx = i;
        }
    }

    int v1 = imx, v2 = n - 1 - imn, ans = 0;

    if (imn > imx)
        ans = v1 + v2;
    else
        ans = v1 + v2 - 1;

    cout << ans << endl;
}