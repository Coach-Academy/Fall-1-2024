#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{

    int qs;
    cin >> qs;
    queue<int> q;
    priority_queue<int, vector<int>, greater<int>> pq; // from smallest to largest
    while (qs--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        else if (type == 2)
        {
            if (pq.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << pq.top() << endl;
                pq.pop();
            }
        }
        else
        {
            while (!q.empty())
            {
                pq.push(q.front());
                q.pop();
            }
        }
    }
}