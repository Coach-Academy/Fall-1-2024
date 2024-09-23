#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int a = A + B;
    int b = A - B;
    int c = A * B;

    if (a >= b && a >= c)
    {
        cout << a;
    }
    else if (b >= a && b >= c)
    {
        cout << b;
    }
    else
    {
        cout << c;
    }
}