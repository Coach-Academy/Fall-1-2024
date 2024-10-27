#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int mn = a[0];
    int mx = a[0];
    int ans = 0;
    for (int i = 1; i < n; i++)
    {

        ans += a[i] < mn or a[i] > mx;

        if (a[i] < mn)
            mn = a[i];
        if (a[i] > mx)
            mx = a[i];
    }

    cout << ans << endl;
}