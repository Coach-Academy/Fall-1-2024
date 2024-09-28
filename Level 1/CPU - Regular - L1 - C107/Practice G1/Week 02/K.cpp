#include <iostream>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;

    long long numberOfEven = n / 2;
    long long numberOfOdd = n - numberOfEven;

    if (k <= numberOfOdd)
    {
        cout << 2ll * k - 1ll << endl;
    }
    else
    {
        cout << 2ll * (k - numberOfOdd) << endl;
    }

    return 0;
}
