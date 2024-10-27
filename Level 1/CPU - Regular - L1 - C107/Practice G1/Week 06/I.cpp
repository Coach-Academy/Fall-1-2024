#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n], b[n];

    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int ans = 0;

    int cur = 0;

    for (int i = 0; i < n; i++)
    {
        cur -= a[i];
        cur += b[i];
        ans = max(ans, cur);
    }

    cout << ans << endl;

    return 0;
}