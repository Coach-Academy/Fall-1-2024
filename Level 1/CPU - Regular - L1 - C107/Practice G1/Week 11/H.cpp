#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min_price = INT_MAX;

    for (int i = 0; i < n; ++i)
    {
        int a, p, x;
        cin >> a >> p >> x;

        if (x > a && p < min_price)
        {
            min_price = p;
        }
    }

    cout << (min_price == INT_MAX ? -1 : min_price) << endl;

    return 0;
}
