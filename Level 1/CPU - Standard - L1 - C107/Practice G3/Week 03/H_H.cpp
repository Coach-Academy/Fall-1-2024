#include <iostream>
using namespace std;
int main()
{
    int row = 0, col = 0, x;

    for (int i = 1; i <= 5; i++) // 1 ....5
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> x;
            if (x == 1)
            {
                row = i, col = j;
            }
        }
    }

    int answer = abs(row - 3) + abs(col - 3); // |-x|
    cout << answer << endl;
}