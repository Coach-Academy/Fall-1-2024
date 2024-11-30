#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // 1st step => from n to 1
    for (int i = n; i > 0; i--)
    {
        // search for the idex of i-th element
        int idx = -1;
        for (int j = 0; j <= i; j++)
        {
            if (a[j] == i)
            {
                idx = j;
                break;
            }
        }

        //  push answer to ans
        if (idx + 1 == i)
        {
            ans.push_back(0);
            continue;
        }

        ans.push_back(idx + 1);

        // rearange the vector to maintain shifts
        vector<int> tmp;
        for (int j = idx + 1; j < i; j++)
            tmp.push_back(a[j]);

        for (int j = 0; j <= idx; j++)
            tmp.push_back(a[j]);

        for (int j = i; j < n; j++)
            tmp.push_back(a[j]);


        // commit change for vector a
        a = tmp;
    }

    for (int i = n - 1; i >= 0; i--)
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
