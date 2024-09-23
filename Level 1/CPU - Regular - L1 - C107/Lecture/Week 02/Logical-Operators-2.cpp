#include <iostream>
using namespace std;
int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    if (a < b and a < c)
    {
        cout << "b is between a and c" << endl;
    }

    if (!(a < b and b < c))
    {
        cout << "b is not between a and c" << endl;
    }

    if (a >= b or b >= c)
    {
        cout << "b is not between a and c" << endl;
    }
}