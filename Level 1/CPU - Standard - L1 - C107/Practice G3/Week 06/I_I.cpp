#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, total = 0, answer = 0, enter, exit;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> exit >> enter;
        int net = enter - exit;
        total += net;

        answer = max(answer, total);
    }

    cout << answer;
}