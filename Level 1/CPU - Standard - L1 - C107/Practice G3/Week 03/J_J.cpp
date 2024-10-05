#include <iostream>
using namespace std;
int main()
{
    int n, x, one = 0, two = 0, three = 0, four = 0;
    cin >> n;
    for (int i = 0; i < n; i++) // 0,1,2,3
    {
        cin >> x;

        one += x == 1;
        two += x == 2;
        three += x == 3;
        four += x == 4;
    }

    int answer = 0;

    answer += four;

    answer += three;
    one -= min(one, three);

    answer += two / 2;
    one += 2 * (two % 2);

    answer += (one + 3) / 4;


    cout << answer << endl;
}