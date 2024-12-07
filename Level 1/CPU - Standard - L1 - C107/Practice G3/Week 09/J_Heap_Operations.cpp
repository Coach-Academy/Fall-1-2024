#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    string s;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> min_heap;
    vector<string> ans;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "insert")
        {
            cin >> x;
            min_heap.push(x);
            ans.push_back("insert " + to_string(x));
        }
        else if (s == "getMin")
        {
            cin >> x;

            while (min_heap.size() && min_heap.top() < x)
            {
                min_heap.pop();
                ans.push_back("removeMin");
            }
            
            if (min_heap.empty() || min_heap.top() != x)
            {
                min_heap.push(x);
                ans.push_back("insert " + to_string(x));
            }
            ans.push_back("getMin " + to_string(x));
        }
        else
        {
            if (min_heap.empty())
            {
                min_heap.push(0);
                ans.push_back("insert 0");
            }

            min_heap.pop();
            ans.push_back("removeMin");
        }
    }
    cout << ans.size() << "\n";
    for (string &a : ans)
        cout << a << "\n";
}

int main()
{
    int TC = 1;
    // cin >> TC;
    while (TC--)
        solve();
}
