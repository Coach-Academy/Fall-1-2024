#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<string> st;

    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.find(v[i]) == st.end())
        {
            cout << v[i] << "\n";
            st.insert(v[i]);
        }
    }
    return 0;
}