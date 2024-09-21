#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int hoursUntilNewYear = 48 - m; // (24 - m + 24)
    cout << hoursUntilNewYear;
    return 0;
}