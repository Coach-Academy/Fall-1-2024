#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int q;
    cin >> q;

    string s;
    stack<string> timeStamps;
    timeStamps.push("");

    while (q--)
    {
        int op;
        cin >> op;

        if (op == 1)
        {
            string W;
            cin >> W;
            s += W;
            timeStamps.push(s);
        }
        else if (op == 2)
        {
            int k;
            cin >> k;

            for (int i = 0; i < k; i++)
                s.pop_back();

            timeStamps.push(s);
        }
        else if (op == 3)
        {
            int k;
            cin >> k;

            cout << s[k - 1] << "\n";
        }
        else
        {
            if (timeStamps.size() >= 2)
            {
                timeStamps.pop();
                s = timeStamps.top();
            }
            else
            {
                s = "";
            }
        }
    }
}