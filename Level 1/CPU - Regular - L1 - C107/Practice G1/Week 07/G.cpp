#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ones = 0, twos = 0, threes = 0;

    for (int i = 0; i < s.size(); i++)
    {
        // switch (s[i])
        // {
        // case '1':
        //     ones++;
        //     break;
        // case '2':
        //     twos++;
        //     break;
        // case '3':
        //     threes++;
        //     break;
        // }
        if (s[i] == '1')
            ones++;
        else if (s[i] == '2')
            twos++;
        else if (s[i] == '3')
            threes++;
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