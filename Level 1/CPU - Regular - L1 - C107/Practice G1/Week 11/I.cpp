#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{

    ll n;
    cin >> n;
    ll x;

    cin >> x;

    vector<ll> ans;
    while (n--)
    {
        ll z;
        cin >> z;
        if (z != x)
        {
            ans.push_back(z);
        }
    }

    for (ll i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}