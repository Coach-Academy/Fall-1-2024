#include <iostream>

using namespace std;

int main()
{
    int A, B;

    cin >> A >> B;

    if (0 < A and B == 0)
        cout << "Gold" << endl;
    else if (A == 0 and 0 < B)
        cout << "Silver" << endl;
    else
        cout << "Alloy" << endl;
    return 0;
}
