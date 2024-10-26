#include <bits/stdc++.h>
using namespace std;
int n, a[1001];
int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    cout << (a[0] == 1 ? -1 : 1);
}