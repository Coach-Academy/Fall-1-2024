#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;

    int a[m];

    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a + m);

    int ans = a[n - 1] - a[0];

    for (int i = 0; i < m; i++)
    {
        if (i + n - 1 < m)
        {
            ans = min(ans, a[i + n - 1] - a[i]);
        }
    }

    cout << ans << endl;
}