#include <bits/stdc++.h>
using namespace std;
int n, k, x, a;
int main()
{
    cin >> n >> k >> x;

    int answer = k * x;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (i < n - k)
            answer += a;
    }

    cout << answer << endl;
}