#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int firstDigit = N / 100;
    int lastDigit = N % 10;

    if (firstDigit == lastDigit)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
