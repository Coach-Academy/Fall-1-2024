#include <iostream>
#include <deque>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans;

    for (int i = 1; i < n; i++)
    {
        if (v[i] <= v[i - 1])
        {
            ans.push_back(v[i - 1]);
        }
    }
    ans.push_back(v[n - 1]);

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}