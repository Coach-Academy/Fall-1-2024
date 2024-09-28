#include <iostream>
using namespace std;
int main()
{
    char a, b, c;
    cin >> a >> b >> c;

    if (a == b and b == c)
    {
        if (a == 'R')
            cout << 3;
        else
            cout << 0;
    }
    else if (b == 'R' and (a == b or b == c))
    {
        cout << 2;
    }
    else
        cout << 1;
}

/*
 string s;
    cin >> s;
    if (s == "RRR")
    {
        cout << 3;
    }
    else if (s == "RRS" or s == "SRR")
    {
        cout << 2;
    }
    else if (s == "SSS")
        cout << 0;
    else
        cout << 1;

*/