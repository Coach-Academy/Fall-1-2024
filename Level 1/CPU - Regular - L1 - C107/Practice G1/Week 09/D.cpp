#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        stack<char> st;
        bool good = 1;
        for (auto &c : s)
        {
            if (c == '(' or c == '[' or c == '{')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                {
                    good = 0;
                    break;
                }

                if (c == ')' and st.top() == '(')
                    st.pop();
                else if (c == ']' and st.top() == '[')
                    st.pop();
                else if (c == '}' and st.top() == '{')
                    st.pop();

                else
                {
                    good = 0;
                    break;
                }
            }
        }

        good = good and st.empty();

        if (good)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
