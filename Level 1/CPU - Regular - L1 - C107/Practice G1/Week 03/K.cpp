#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int num = 1; num <= n; num++)
    {
        bool isLucky = true;

        int temp = num;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit != 4 && digit != 7)
            {
                isLucky = false;
                break;
            }
            temp /= 10;
        }

        if (isLucky)
        {
            if (n % num == 0)
            {
                cout << "YES" << endl;
                return 0; // works as break but for functions
            }
        }
    }

    cout << "NO" << endl;
}