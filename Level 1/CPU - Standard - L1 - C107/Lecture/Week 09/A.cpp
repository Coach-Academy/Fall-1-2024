#include <bits/stdc++.h>

using namespace std;

int main() {
    int t = 1;
//    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        queue<int> q;
        while (n--) {
            int x;
            cin >> x;
            q.push(x);
        }
        while (d--) {
            q.push(q.front());
            q.pop();
        }

        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }
        cout << '\n';
    }
    return 0;
}