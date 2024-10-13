#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int maxElement = a[0], minElement = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxElement)
        {
            maxElement = a[i];
        }
        if (a[i] < minElement)
        {
            minElement = a[i];
        }
    }

    int firstIndexOfMax = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxElement)
        {
            firstIndexOfMax = i;
            break;
        }
    }

    for (int i = firstIndexOfMax; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = maxElement;
    int totalAnswer = firstIndexOfMax - 0;
    int lastIndexOfMin = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == minElement)
        {
            lastIndexOfMin = i;
            break;
        }
    }

    int lastIndex = n - 1;

    totalAnswer += lastIndex - lastIndexOfMin;

    cout << totalAnswer << endl;

    return 0;
}