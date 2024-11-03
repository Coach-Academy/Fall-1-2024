#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string n;
    cin >> n;
    while (n.size() > 1 and n.back() == '0')
    {
        n.pop_back();
    }
    string copy = n;
    reverse(copy.begin(), copy.end());
    if (copy == n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}