#include <iostream>
using namespace std;

int main()
{
    // s.front(), s.back(),s.size()

    int n;
    cin >> n;

    while (n--)
    {

        string s;
        cin >> s;

        if (s.size() > 10)
        {
            cout << s.front() << s.size() - 2 << s.back() << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}