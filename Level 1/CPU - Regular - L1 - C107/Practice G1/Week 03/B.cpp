#include <iostream>

using namespace std;

int main()
{
    int n = 26;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        cout << char(x - 1 + 'a');
    }
}