#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> sk;

    for (char &c : s)
    {
        if (sk.empty())
        {
            sk.push(c);
            continue;
        }
        if (c == sk.top())
        {
            sk.pop();
            continue;
        }
        sk.push(c);
    }

    cout << (sk.empty() ? "Yes" : "No");
}

int main()
{
    int TC = 1;
    // cin >> TC;
    while (TC--)
        solve();
}
