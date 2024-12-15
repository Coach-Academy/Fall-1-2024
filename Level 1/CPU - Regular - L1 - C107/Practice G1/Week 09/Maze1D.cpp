#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int minL = 0, maxR = 0;

    int x = 0;
    //
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            x--;
        else
            x++;

        if (i + 1 < s.size())
        {
            minL = min(minL, x);
            maxR = max(maxR, x);
        }
    }

    if (x < minL or x > maxR)
    {
        cout << 1 << endl;
        return 0;
    }

    auto goodL = [&](int k) -> bool
    {
        int x = 0;
        int minL = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;

            x = min(x, k - 1); // => L, L =-1,

            if (i + 1 < s.size())
            {
                minL = min(minL, x);
            }
        }

        return x >= minL;
    };

    auto goodR = [&](int k) -> bool
    {
        int x = 0;
        int maxR = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'L')
                x--;
            else
                x++;

            x = max(x, k + 1); // + 1 => R => ++

            if (i + 1 < s.size())
            {
                maxR = max(maxR, x);
            }
        }

        return x <= maxR;
    };

    if (s.back() == 'L')
    {
        int lo = 1, hi = s.size();

        int ans = hi;

        while (lo <= hi)
        {
            int k = (lo + hi) / 2; // mid point
            if (goodL(k))
            {
                ans = k;
                hi = k - 1;
            }
            else
            {
                lo = k + 1;
            }
        }

        cout << ans - 1 << endl;
    }
    else
    {
        int lo = -s.size(), hi = -1;
        int ans = -lo;
        while (lo <= hi)
        {
            int k = (lo + hi) / 2;
            if (goodR(k))
            {
                lo = k + 1;
                ans = -(k + 1);
            }
            else
            {
                hi = k - 1;
            }
        }

        cout << ans << endl;
    }
}