#include <iostream>
using namespace std;
const int N = 150005;
int a[N], mn[N];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        mn[n] = 1e8;
        for (int i = n - 1; i >= 0; i--)
        {
            mn[i] = min(a[i], mn[i + 1]);
        }

        int answer = 0;
        for (int i = 0; i < n; i++)
        {
            // cerr << a[i] << " " << mn[i + 1] << endl;
            if (a[i] > mn[i + 1])
                answer++;
        }
        cout << answer << endl;
    }
}