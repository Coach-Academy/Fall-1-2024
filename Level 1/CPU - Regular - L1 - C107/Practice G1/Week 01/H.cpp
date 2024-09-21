#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    // A per 100,
    // X per B

    cout << fixed << setprecision(6);
    cout << (b * a) / 100 << endl;
}