#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int q, type, x;
    queue<int> buffer;
    priority_queue<int, vector<int>, greater<int>> pq;

    cin >> q;
    while (q--)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> x;
            buffer.push(x);
        }
        else if (type == 2)
        {
            if (pq.empty())
            {
                cout << buffer.front() << endl;
                buffer.pop();
            }
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else
        {
            while (buffer.size())
            {
                pq.push(buffer.front());
                buffer.pop();
            }
        }
    }
}

int main()
{
    int TC = 1;
    // cin >> TC;
    while (TC--)
        solve();
}
