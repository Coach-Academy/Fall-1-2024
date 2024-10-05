#include <iostream>
using namespace std;
int main()
{
    int n, height = 0, sum = 0, counter = 1;
    cin >> n;

    while (true)
    {
        sum = 0;
        for (int i = 0; i <= counter; i++)
            sum += i;
        counter++;

        if (n - sum >= 0)
        {
            n -= sum;
            height++;
        }
        else
            break;
    }

    cout << height;
}