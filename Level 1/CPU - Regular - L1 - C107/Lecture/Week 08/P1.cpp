#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> v(n);

    for (auto &x : v)
        cin >> x;

    vector<int> negs;
    vector<int> poss;
    vector<int> zs;

    for (auto &x : v)
    {
        if (x < 0)
            negs.push_back(x);
        else if (x > 0)
            poss.push_back(x);
        else
            zs.push_back(x);
    }

    if (poss.size() == 0)
    {
        // at least 3 negative numbers
        poss.push_back(negs.back());
        negs.pop_back();
        poss.push_back(negs.back());
        negs.pop_back();
        // negs contains at least 1 element
    }

    if (negs.size() % 2 == 0)
    {
        zs.push_back(negs.back());
        negs.pop_back();
    }

    cout << negs.size() << " ";

    for (auto &x : negs)
        cout << x << " ";

    cout << endl;

    cout << poss.size() << " ";
    for (auto &x : poss)
        cout << x << " ";

    cout << endl;

    cout << zs.size() << " ";
    for (auto &x : zs)
        cout << x << " ";
    cout << endl;
}