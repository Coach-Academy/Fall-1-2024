#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double l, p, q;
    cin >> l >> p >> q;

    double d1 = (l * p) / (p + q);
    cout << fixed << setprecision(4);
    cout << d1 << endl;

    return 0;
}