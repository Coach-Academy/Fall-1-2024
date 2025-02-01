#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{

    string s;
    cin >> s;

    for (auto &c : s)
    {
        if (c == '.')   
        {
            break;
        }
        else
            cout << c;
    }

    return 0;
}