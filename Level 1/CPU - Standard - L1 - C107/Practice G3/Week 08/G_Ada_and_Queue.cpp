#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    string s;
    cin >> q;

    deque<int> dq;

    bool rev = 0;
    while (q--)
    {
        cin >> s;
        if (s == "front")
        {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
            {
                if (rev)
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
        }
        else if (s == "back")
        {
            if (dq.empty())
                cout << "No job for Ada?\n";
            else
            {
                if (!rev)
                {
                    cout << dq.back() << "\n";
                    dq.pop_back();
                }
                else
                {
                    cout << dq.front() << "\n";
                    dq.pop_front();
                }
            }
        }
        else if (s == "toFront")
        {
            int x;
            cin >> x;
            rev ? dq.push_back(x) : dq.push_front(x);
        }
        else if (s == "push_back")
        {
            int x;
            cin >> x;
            !rev ? dq.push_back(x) : dq.push_front(x);
        }
        else
        {
            rev = !rev;
        }
    }
}
