#include <iostream>
#include <algorithm>

using namespace std;
const int N = 105;
int arr[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << '\n';
    return 0;
}