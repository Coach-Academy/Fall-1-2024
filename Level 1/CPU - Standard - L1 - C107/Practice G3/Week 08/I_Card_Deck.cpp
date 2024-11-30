#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), mx(n), ans, tmp;
    for (int &it : a)
        cin >> it;

    mx[0] = a[0];
    for (int i = 1; i < n; i++)
        mx[i] = max(a[i], mx[i - 1]);

    for (int i = n - 1; i >= 0; i--)
    {
        tmp.push_back(a[i]);
        if (a[i] == mx[i])
        {
            while (tmp.size())
            {
                ans.push_back(tmp.back());
                tmp.pop_back();
            }
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    cout << "\n";
}

int main()
{
    int TC;
    cin >> TC;
    while (TC--)
        solve();
}
