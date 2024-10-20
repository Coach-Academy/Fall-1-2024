#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int visited[26] = {0}; // 26 alphabets

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' and s[i] <= 'Z')
        {
            visited[s[i] - 'A'] = 1;
        }
        else
        {
            visited[s[i] - 'a'] = 1;
        }
    }

    // sum of the arrays visited = 26 // all cells have ones

    int sum = 0;

    for (int i = 0; i < 26; i++)
    {
        sum += visited[i];
    }

    if (sum == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}