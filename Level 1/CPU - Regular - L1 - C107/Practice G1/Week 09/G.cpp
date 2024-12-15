#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;

    stack<char> st;

    for (auto &c : s)
    {
        if (st.empty())
            st.push(c);
        else if (st.top() == c)
            st.pop();
        else if (st.top() != c)
            st.push(c);
    }

    if (st.size() == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}