#include <bits/stdc++.h>

using namespace std;

int main()
{
    string even = "CHAT WITH HER!";
    string odd = "IGNORE HIM!";

    string s;
    cin >> s;

    set<int> st;
    for (auto c : s)
    {
        st.insert(c);
    }

    if (st.size() % 2 == 0)
    {
        cout << even << endl;
    }
    else
    {
        cout << odd << endl;
    }
}