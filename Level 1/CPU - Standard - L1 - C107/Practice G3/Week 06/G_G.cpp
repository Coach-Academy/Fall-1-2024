#include <bits/stdc++.h>
using namespace std;
int n, m, a[51], answer = 1001;
int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> a[i];

    sort(a, a + m);

    for (int i = 0; i + n - 1 < m; i++)
    {
        int dif = a[i + n - 1] - a[i];
        answer = min(answer, dif);
    }

    cout << answer << endl;
}