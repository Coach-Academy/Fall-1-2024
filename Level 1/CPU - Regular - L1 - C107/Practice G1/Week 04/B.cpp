#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int d[n - 1]; // n-1 integers not n integers
    for (int i = 0; i < n - 1; i++)
    {
        cin >> d[i];
    }
    int a, b;
    cin >> a >> b;

    int requiredYears = 0;
    // neaded reank is b,
    for (int i = a - 1; i < b - 1; i++)
    {
        requiredYears += d[i];
    }

    cout << requiredYears << endl;
    return 0;
}