#include <iostream>

using namespace std;

int main()
{

    int arr[26]{0};

    char ch;
    while (cin >> ch)
    {
        if (ch != '{' and ch != '}' and ch != ',')
        {
            arr[ch - 'a'] = 1;
        }
    }

    int cnt = 0;

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}