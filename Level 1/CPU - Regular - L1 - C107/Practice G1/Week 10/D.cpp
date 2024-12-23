#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<char, char> mp;
    vector<string> v(3);

    v[0] = "qwertyuiop";
    v[1] = "asdfghjkl;";
    v[2] = "zxcvbnm,./";

    char shift;
    cin >> shift;

    string writen;
    cin >> writen;

    for (auto &row : v)
    {
        for (int i = 0; i < row.size(); i++)
        {
            if (shift == 'R')
            {
                if (i)
                    mp[row[i]] = row[i - 1];
            }
            else
            {
                if (i + 1 < row.size())
                    mp[row[i]] = row[i + 1];
            }
        }
    }

    for (auto &x : writen)
    {
        cout << mp[x];
    }

    return 0;
}