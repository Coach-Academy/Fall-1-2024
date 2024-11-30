#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<int> ans;

        vector<int> prefix_max = v;
        for (int i = 1; i < n; i++)
        {
            prefix_max[i] = max(prefix_max[i], prefix_max[i - 1]);
        }
        int last = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (v[i] == prefix_max[i])
            {
                for (int j = i; j < last; j++)
                {
                    ans.push_back(v[j]);
                }

                last = i;
            }
        }

        for (int i = 0; i < last; i++)
        {
            ans.push_back(v[i]);
        }

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }

        cout << "\n";
    }
}