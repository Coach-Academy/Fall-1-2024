#include <iostream>
#include <deque>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    deque<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }

    while (v.size())
    {
        if (v[0].first <= m)
        {
            if (v.size() == 1)
            {
                cout << v[0].second;
                return 0;
            }
            v.pop_front();
        }
        else
        {
            v.push_back({v[0].first - m, v[0].second});
            v.pop_front();
        }
    }
}