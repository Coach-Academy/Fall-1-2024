#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << fixed << setprecision(5);
    double a, b;
    cin >> a >> b;

    cout << (a - b) / 3 + b << endl;
}