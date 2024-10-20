#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char k; // 0, 1,2,3,4,5,6,7,8,9
    cin >> k;

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int good = 0;

    for (int i = 0; i < n; i++)
    {
        // arr[i] => string
        bool is_good = 1;
        // visited array;
        int visited[10]{0}; // s[i]-'a',
        // s[i]-'0';
        for (int j = 0; j < arr[i].size(); j++) // loop over all characters in the string
        {
            visited[arr[i][j] - '0'] = 1;
            // if (arr[i][j] > k)
            // {
            //     is_good = 0;
            //     break;
            // }
        }
        // s[i] - 'a', 0,26
        // s[i] - '0', 0,9
        for (int j = 0; j <= k - '0'; j++)
        {
            if (!visited[j])
            {
                is_good = 0;
                break;
            }
        }

        if (is_good)
        {
            good++;
        }
    }

    cout << good << endl;
}