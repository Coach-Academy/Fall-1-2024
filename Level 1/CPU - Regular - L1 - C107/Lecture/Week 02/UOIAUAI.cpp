#include <iostream>
using namespace std;

int main()
{

    char c;
    cin >> c;

    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
    {
        cout << "vowel" << endl;
    }
    else
    {
        cout << "consonant" << endl;
    }
}