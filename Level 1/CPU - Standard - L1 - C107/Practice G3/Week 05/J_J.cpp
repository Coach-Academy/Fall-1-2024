#include <iostream>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s, t;
        cin >> s >> t;

        int n = s.size(), m = t.size(), ok = false;

        for (int steps = 0; steps < m; ++steps)
        {

            int l = steps, r = m - steps - 1;
            for (int pos = 0; pos < n; ++pos)
            {
                string tmp;
                if (pos - r < 0 || pos - l < 0 || s[pos - r] != t[0])
                    continue;

                for (int i = pos - r; i <= pos; i++)
                    tmp += s[i];

                for (int i = pos - 1; i >= pos - l; i--)
                    tmp += s[i];

                ok |= (tmp == t);
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}