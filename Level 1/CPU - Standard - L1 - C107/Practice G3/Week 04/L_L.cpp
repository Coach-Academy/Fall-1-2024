#include <iostream>
using namespace std;
int n, a[55], counter;

int main()
{
    while (cin >> n and n != 0)
    {
        counter++;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int inEachWall = sum / n;

        int answer = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > inEachWall)
                answer += a[i] - inEachWall;
        }
        cout << "Set #" << counter << "\n"
             << "The minimum number of moves is " << answer << ".\n\n";
    }
}