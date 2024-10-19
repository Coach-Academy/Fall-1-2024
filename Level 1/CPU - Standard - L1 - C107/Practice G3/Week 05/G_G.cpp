#include <iostream>
using namespace std;
int main()
{
    int n, k, answer = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        int fr[10]{};
        string s;
        cin >> s;
        bool ok = true;
        for (char c : s) // abcd
        {
            int i = c - '0';
            fr[i] = true;
        }
        for (int i = 0; i <= k; i++)
            ok &= fr[i];

        answer += ok;
    }
    cout << answer << endl;
}