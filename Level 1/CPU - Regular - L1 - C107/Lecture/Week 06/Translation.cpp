#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    string s, t;
    cin >> s >> t;

    // reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());

    if (s == t)
        cout << "YES";
    else
        cout << "NO";
}