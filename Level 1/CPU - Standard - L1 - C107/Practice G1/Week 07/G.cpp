#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    char ch;

    int ones = 0, twos = 0, threes = 0;

    while (cin >> ch)
    {
        if (ch == '1')
        {
            ones++;
        }
        else if (ch == '2')
        {
            twos++;
        }
        else if (ch == '3')
        {
            threes++;
        }
    }

    string ans;

    while (ones--)
        ans += "1+";
    while (twos--)
        ans += "2+";
    while (threes--)
        ans += "3+";

    ans.pop_back();

    cout << ans << endl;

    return 0;
}