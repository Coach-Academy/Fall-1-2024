#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<long long> potions(n);
    for (int i = 0; i < n; ++i)
        cin >> potions[i];

    priority_queue<long long, vector<long long>, greater<long long>> min_heap;

    long long health = 0;
    int cnt = 0;

    for (int i = 0; i < n; ++i)
    {
        if (health + potions[i] >= 0)
        {
            health += potions[i];
            min_heap.push(potions[i]);
            cnt++;
        }
        else if (min_heap.size() and potions[i] > min_heap.top())
        {
            health -= min_heap.top() - potions[i];
            min_heap.pop();
            min_heap.push(potions[i]);
        }
    }
    cout << cnt << endl;
}

int main()
{
    int TC = 1;
    // cin >> TC;
    while (TC--)
        solve();
}
