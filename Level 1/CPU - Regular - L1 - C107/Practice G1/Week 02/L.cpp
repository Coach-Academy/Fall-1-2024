#include <iostream>

using namespace std;

int main()
{

    int X;

    cin >> X;

    if (X < 40)
    {
        cout << 40 - X << endl;
    }
    else if (X < 70)
    {
        cout << 70 - X << endl;
    }
    else if (X < 90)
    {
        cout << 90 - X << endl;
    }
    else
    {
        cout << "expert" << endl;
    }

    return 0;
}
