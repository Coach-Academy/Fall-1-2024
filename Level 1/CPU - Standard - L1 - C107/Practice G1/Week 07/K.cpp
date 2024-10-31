#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;

    bool ok = true;
    while (n--)
    {
        int a, b;

        cin >> a >> b;

        if (a == x or b == x or a == 7 - x or b == 7 - x)
        {
            ok = false;
        }
    }

    if (ok)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}