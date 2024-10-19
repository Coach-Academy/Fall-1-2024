#include <iostream>
using namespace std;
int main()
{
    int n, answer = 0;
    string s;
    cin >> n >> s;

    for (int i = 1; i < n; i++)
        answer += s[i] == s[i - 1];

    cout << answer << endl;
}