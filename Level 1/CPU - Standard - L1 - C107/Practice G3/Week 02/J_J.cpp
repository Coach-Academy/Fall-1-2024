#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b)
    {
        cout << "Takahashi";
    }
    else if (b > a)
    {
        cout << "Aoki";
    }
    else
    {
        if (c == 0)
            cout << "Aoki";
        else
            cout << "Takahashi";
    }
}