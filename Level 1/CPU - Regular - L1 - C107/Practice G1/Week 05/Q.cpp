#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        bool is_good = 1;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i + 1] - s[i] != 1)
            {
                is_good = false;
                break;
            }
        }

        if (is_good)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}