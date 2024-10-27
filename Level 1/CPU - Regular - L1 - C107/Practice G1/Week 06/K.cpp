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

    int indexOfMax = 0, lastIndexOfMin = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[indexOfMax])
        {
            indexOfMax = i;
        }
    }

    int ops = 0;

    for (int i = indexOfMax; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
        ops++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[lastIndexOfMin])
        {
            lastIndexOfMin = i;
        }
    }

    for (int i = lastIndexOfMin; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        ops++;
    }

    cout << ops << endl;
}
