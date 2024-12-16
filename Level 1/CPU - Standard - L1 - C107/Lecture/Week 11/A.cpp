#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int sum(vector<int> v, int i) {
    if (i == v.size())
        return 0;
    return v[i] + sum(v, i + 1);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &f: v) cin >> f;
        cout << "Case " << i+1 << ": " << sum(v, 0) << endl;
    }
    return 0;
}