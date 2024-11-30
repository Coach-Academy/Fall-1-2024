#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    int n, d;

    cin >> n >> d;

    deque<int> dq;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }

    while (d--)
    {
        dq.push_back(dq.front());
        dq.pop_front();
    }

    for (int i = 0; i < n; i++)
    {
        cout << dq[i] << " ";
    }
}