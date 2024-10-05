#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum = 0;
    int level = 0;
    int needed = 0;
    while (needed <= n)
    {
        level++;
        sum += level;
        needed += sum;
    }

    cout << level - 1 << endl;
}