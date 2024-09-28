#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (C == 1)
    {
        // B first

        if (B > A)
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }
    else
    {
        // A first
        if (A > B)
        {
            cout << "Takahashi" << endl;
        }
        else
        {
            cout << "Aoki" << endl;
        }
    }
    return 0;
}
