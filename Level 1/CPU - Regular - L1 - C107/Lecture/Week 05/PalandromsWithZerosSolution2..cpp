#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;

    string s = to_string(n);

    int numberOfZerosAtTheEnd = 0;

    while (n)
    {
        int d = n % 10;
        if (d == 0)
        {
            numberOfZerosAtTheEnd++;
        }
        else
        {
            break;
        }

        n /= 10;
    }

    string zerosAtTheFront = string(numberOfZerosAtTheEnd, '0');

    string finalString = zerosAtTheFront + s;

    string copyOfString = finalString;
    reverse(copyOfString.begin(), copyOfString.end());

    if (copyOfString == finalString)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}