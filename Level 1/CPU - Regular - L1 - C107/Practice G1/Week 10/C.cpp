#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        set<char> st;
        for (auto &c : s1)
        {
            st.insert(c);
        }

        bool found = false;
        for (auto &x : s2)
        {
            if (st.find(x) != st.end())
            {
                found = true;
                break;
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}