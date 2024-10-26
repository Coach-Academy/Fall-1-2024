#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int pr[n], a[n], b[n], a_pos = 0, b_pos = 0, counter = 0;
    for (int i = 0; i < n; i++) // 1, 2, 3
        pr[i] = i + 1;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    while (next_permutation(pr, pr + n))
    {
        counter++;
        bool equala = true, equalb = true;

        for (int i = 0; i < n; i++)
        {
            if (pr[i] != a[i])
                equala = false;
            if (pr[i] != b[i])
                equalb = false;
        }
        if (equala)
            a_pos = counter;

        if (equalb)
            b_pos = counter;
    }

    cout << abs(a_pos - b_pos) << endl;
}