#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool answer = false;

    for (int i = 1; i <= n; i++) //
    {
        bool isLucky = true;
        int temp = i;
        // check if temp is lucky

        while (temp != 0) // 754
        {
            int d = temp % 10; // 4 % 10 = 4
            temp /= 10;

            if (d != 4 and d != 7) // 4, 5, 7
                isLucky = false;
        }
        // isLucky => checks if [i] is lucky
        // isLucky ===> true => n | i ?
        // isLucky ===> false => nothing

        if (isLucky and n % i == 0)
        {
            answer = true;
        }
    }

    cout << (answer ? "YES" : "NO");
}
