#include <iostream>
using namespace std;
int arr[120];
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 1; i < n; i++)
        cin >> arr[i];

    cin >> a >> b;

    int answer = 0;
    for (int i = a; i < b; i++)
    {
        answer += arr[i];
    }
    cout << answer << endl;
}