#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    char prev_a, prev_b;

    int gourps = 1;
    cin >> prev_a >> prev_b;

    for (int i = 1; i < n; i++)
    {
        char current_a, current_b;
        cin >> current_a >> current_b;

        if (current_a != prev_a or current_b != prev_b)
        {
            gourps++;
        }

        prev_a = current_a;
        prev_b = current_b;
    }

    cout << gourps << endl;

    return 0;
}