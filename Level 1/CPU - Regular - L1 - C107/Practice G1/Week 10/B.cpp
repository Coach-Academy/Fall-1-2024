#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;

    // get line

    getline(cin >> ws, s);

    set<char> st;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ' and s[i] != ',' and s[i] != '{' and s[i] != '}')
        {
            st.insert(s[i]);
        }
    }

    cout << st.size() << endl;
}