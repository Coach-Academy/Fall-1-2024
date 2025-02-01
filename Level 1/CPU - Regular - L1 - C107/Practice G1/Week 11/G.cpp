#include <bits/stdc++.h>

using namespace std;

bool is_upper(char c)
{
    return c >= 'A' && c <= 'Z';
}

bool is_lower(char c)
{
    return c >= 'a' && c <= 'z';
}

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    bool ok = 1;
    // 0 based, 
    for (int i = 0; i < n; i += 2)
        ok = ok && is_lower(s[i]);

    for (int i = 1; i < n; i += 2)
        ok = ok && is_upper(s[i]);

    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
