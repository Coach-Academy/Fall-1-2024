#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> st;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        for (int j = 0; j < x; j++)
        {
            int y;
            cin >> y;

            st.insert(y);
        }
    }

    if (st.size() == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}