#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n)
    {
        int d = n % 10;
        if (d != 0)
        {
            break;
        }
        n /= 10;
    }
    string s = to_string(n);

    string copyOfString = s;
    reverse(copyOfString.begin(), copyOfString.end());

    if (copyOfString == s)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}   