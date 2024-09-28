#include <iostream>
using namespace std;
int main()
{
    int v, t, s, d, d1, d2;
    cin >> v >> t >> s >> d;
    d1 = v * t;
    d2 = v * s;

    if (d < d1 or d > d2)
        cout << "Yes";
    else
        cout << "No";
}