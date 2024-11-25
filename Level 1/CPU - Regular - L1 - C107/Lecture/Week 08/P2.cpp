#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{

    int q;
    cin >> q;

    deque<int> dq;
    bool is_reversed = 0;
    while (q--)
    {
        string command;

        cin >> command;

        if (is_reversed)
        {
            if (command == "back")
                command = "front";
            else if (command == "front")
                command = "back";

            if (command == "push_back")
                command = "toFront";
            else if (command == "toFront")
                command = "push_back";
        }

        if (command == "back")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?" << "\n"; // endl
            }
            else
            {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
        }
        else if (command == "front")
        {
            if (dq.empty())
            {
                cout << "No job for Ada?" << "\n"; // endl
            }
            else
            {
                cout << dq.front() << "\n";
                dq.pop_front();
            }
        }
        else if (command == "push_back")
        {
            int x;
            cin >> x;
            dq.push_back(x);
        }
        else if (command == "toFront")
        {
            int x;
            cin >> x;
            dq.push_front(x);
        }
        else if (command == "reverse")
        {
            // is_reversed = !is_reversed; // toggle

            if (is_reversed)
                is_reversed = 0;
            else
                is_reversed = 1;
        }
    }
}