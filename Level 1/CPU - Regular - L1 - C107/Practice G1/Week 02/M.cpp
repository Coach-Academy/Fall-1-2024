#include <iostream>

using namespace std;

int main()
{

    long long V, T, S, D;
    cin >> V >> T >> S >> D;
    // Idea: Find the time it takes for the ball to reach D, if it is between T and S, then Aoki can't hit it
    // Time To reach D = D / V
    // D/V <= S/1 , D/V >= T/1, D*1 >= V*T, D*1 <= V*S
    if (D >= V * T && D <= V * S)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }

    return 0;
}
