#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, cnt, ans = 0;
    string s;
    cin >> n >> s;

    for (int i = 1; i < n;)
    {
        if (s[i - 1] == 'A' and s[i] == 'P')
        {
            cnt = i;
            while (s[cnt++] == 'P')
                ;
            ans = max(ans, cnt - i - 1);
            i = cnt;
        }
        else
            i++;
    }

    cout << ans << endl;
}

int main()
{
    int TC;
    cin >> TC;
    while (TC--)
        solve();
}
