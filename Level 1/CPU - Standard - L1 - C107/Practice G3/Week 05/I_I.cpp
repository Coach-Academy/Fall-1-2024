#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        bool ok = true;
        for (int j = 1; j < s.size(); j++)
        {
            if (s[j] == s[j - 1] or s[j - 1] + 1 != s[j])
                ok = false;
        }

        cout << (ok ? "Yes" : "No") << endl;
    }
}
