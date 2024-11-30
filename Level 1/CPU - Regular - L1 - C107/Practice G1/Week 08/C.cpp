#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> type1, type2, type3;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            type1.push_back(i + 1);
        }
        else if (x == 2)
        {
            type2.push_back(i + 1);
        }
        else
        {
            type3.push_back(i + 1);
        }
    }

    vector<vector<int>> ans;

    while (true)
    {
        if (type1.empty() || type2.empty() || type3.empty())
        {
            break;
        }

        ans.push_back({type1.back(), type2.back(), type3.back()});

        type1.pop_back();
        type2.pop_back();
        type3.pop_back();
    }

    cout << ans.size() << endl;

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }
}