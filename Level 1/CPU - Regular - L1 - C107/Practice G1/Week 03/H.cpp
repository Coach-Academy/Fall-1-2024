#include <iostream>

using namespace std;

int main()
{
    int n = 5;

    int oneI = -1, oneJ = -1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                oneI = i;
                oneJ = j;
            }
        }
    }

    int middleI = n / 2, middleJ = n / 2;

    int move1 = oneI - middleI, move2 = oneJ - middleJ;

    if (move1 < 0)
        move1 = -move1;
    if (move2 < 0)
        move2 = -move2;

    cout << move1 + move2 << endl;
}