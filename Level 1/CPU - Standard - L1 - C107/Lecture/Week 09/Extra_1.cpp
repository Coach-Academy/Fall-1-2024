#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        deque<int> d;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (d.empty() || x < d.front())
                d.push_front(x);
            else
                d.push_back(x);
        }
        for (auto i: d)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}