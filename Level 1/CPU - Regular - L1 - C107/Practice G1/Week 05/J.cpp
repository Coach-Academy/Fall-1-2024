#include <iostream>

using namespace std;

int main()
{

    string s;

    cin >> s;

    if (65 <= s[0] and s[0] <= 90)
    {
        cout << s << endl;
    }
    else
    {

        s[0] -= 32; // samll to capital
        cout << s << endl;
    }

    return 0;
}