#include <iostream>
using namespace std;
int main()
{

    int a, b;
    char c;

    cin >> a >> b >> c;

    switch (c)
    {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
    }
}