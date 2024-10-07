#include <iostream>

using namespace std;
const int N = 11;
int arr[N][N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        arr[i][0] = arr[0][i] = 1;

    for (int i = 1; i < n; i++)
        for (int j = 1; j < n; j++)
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
    cout << arr[n - 1][n - 1] << '\n';
    return 0;
}