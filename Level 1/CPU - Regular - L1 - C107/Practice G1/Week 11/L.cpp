#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll f(ll n)
{
    ll prod = 1;

    while (n)
    {
        if (n % 10 != 0)
        {
            prod *= n % 10;
        }
        n /= 10;
    }

    return prod;
}

ll g(ll n)
{
    if (n < 10)
    {
        return n;
    }

    return g(f(n));
}

int main()
{

    vector<ll> calced(1e6 + 1, 0);
    for (ll i = 1; i <= 1e6; i++)
    {
        calced[i] = g(i);
    }

    vector<vector<ll>> ans(10, vector<ll>(1e6 + 1, 0));

    for (ll i = 1; i <= 1e6; i++)
    {
        ans[calced[i]][i] = 1;
    }

    for (ll k = 1; k < 10; k++)
    {
        for (ll i = 1; i <= 1e6; i++)
        {
            ans[k][i] += ans[k][i - 1];
        }
    }

    ll q;

    cin >> q;

    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;

        cout << ans[k][r] - ans[k][l - 1] << endl;
    }

    return 0;
}