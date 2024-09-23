#include <iostream>
using namespace std;

int main()
{
    int W;
    cin >> W;

    if (W % 2 == 0 and W != 2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}