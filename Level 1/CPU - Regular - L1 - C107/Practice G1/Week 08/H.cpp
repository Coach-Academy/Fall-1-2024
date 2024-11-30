#include <iostream>
#include <deque>
#include <vector>
#include <climits>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> v;
        for (int i = 0; i < n; i++)
            if (s[i] == 'A')
                v.push_back(i);
        v.push_back(n);
        int ans = 0;

        for (int i = 0; i < v.size() - 1; i++)
        {
            ans = max(ans, v[i + 1] - v[i] - 1);
        }

        cout << ans << endl;
    }
}