#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int numberOfOnes = count(arr, arr + n, 1);

    if (numberOfOnes > 0)
        cout << "-1" << endl;
    else
        cout << 1 << endl;
}