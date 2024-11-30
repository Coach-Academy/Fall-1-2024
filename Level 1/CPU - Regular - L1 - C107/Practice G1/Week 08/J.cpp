#include <iostream>
#include <vector>
#include <deque>
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
        deque<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<int> ans(n);

        for (int i = n; i >= 1; i--)
        {
            while (v.back() != i)
            {
                v.push_back(v.front());
                v.pop_front();
                ans[i - 1]++;
            }

            v.pop_back();
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}