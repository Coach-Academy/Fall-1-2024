#include <iostream>

using namespace std;

int main()
{
    int X = 0;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        char a, b, c;
        cin >> a >> b >> c;

        if (a == '+' or b == '+' or c == '+')
        {
            X++;
        }
        else
        {
            X--;
        }
    }

    cout << X << endl;
}