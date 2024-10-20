#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string s;
    cin >> s;

    int remove = 0;
    // RBG = n = 3

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            remove++;
        }
    }

    cout << remove << endl;

    return 0;
}