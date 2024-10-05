#include <iostream>
using namespace std;
int main()
{
    int x;
    for (int i = 0; i < 26; i++)
    {
        cin >> x;
        cout << char('a' + x - 1); 
    }
}