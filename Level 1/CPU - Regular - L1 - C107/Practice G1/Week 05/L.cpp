#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string b;
        cin >> b;

        cout << b[0];
        for (int i = 1; i < b.size(); i += 2)
        {
            cout << b[i];
        }

        cout << endl;
    }

    return 0;
}