#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr + 4);

    int cntDist = 1;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] != arr[i + 1])
            cntDist++;
    }

    cout << 4 - cntDist << endl;
    return 0;
}