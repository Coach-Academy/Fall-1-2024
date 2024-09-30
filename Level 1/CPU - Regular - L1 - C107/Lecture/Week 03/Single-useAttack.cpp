#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {

        int H, X, Y;
        cin >> H >> X >> Y;

        // int count = 1;
        // H -= Y;

        // count += (H + X - 1) / X;

        // cout << count << endl;

        H -= Y;
        int count = 1;

        while (H > 0)
        {
            H -= X;
            count++;
        }

        cout << count << endl;
    }
}
