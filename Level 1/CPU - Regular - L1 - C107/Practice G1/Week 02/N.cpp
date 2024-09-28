#include <iostream>

using namespace std;

int main()
{
    char day1, day2, day3;
    cin >> day1 >> day2 >> day3;

    if (day1 == 'R' and day2 == 'R' and day3 == 'R')
        cout << 3 << endl;
    else if (day1 == 'R' and day2 == 'R')
        cout << 2 << endl;
    else if (day2 == 'R' and day3 == 'R')
        cout << 2 << endl;
    else if (day1 == 'R' or day2 == 'R' or day3 == 'R')
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
