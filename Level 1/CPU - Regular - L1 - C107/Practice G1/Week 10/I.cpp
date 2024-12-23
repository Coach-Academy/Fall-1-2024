#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, r;
        cin >> n >> r;

        set<int, greater<int>> s;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        int count = 0;

        for (auto it : s)
        {
            if (it - count * r > 0)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout << count << "\n";
    }

    return 0;
}