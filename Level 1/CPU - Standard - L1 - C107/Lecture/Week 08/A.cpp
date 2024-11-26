#include <bits/stdc++.h>

using namespace std;

void print(vector<int> v) {
    cout << v.size() << " ";
    for (auto i: v)
        cout << i << " ";
    cout << endl;
}

int main() {
    int t = 1;
//    cin >> t;
    while (t--) {
        vector<int> v1, v2, v3;
        int n;
        cin >> n;
        while (n--) {
            int x;
            cin >> x;
            if (x < 0)
                v1.push_back(x);
            else if (x > 0)
                v2.push_back(x);
            else
                v3.push_back(x);
        }
        if (v1.size() % 2 == 0) {
            v3.push_back(v1.back());
            v1.pop_back();
        }
        if (v2.empty()) {
            v2.push_back(v1.back());
            v1.pop_back();
            v2.push_back(v1.back());
            v1.pop_back();
        }
        print(v1);
        print(v2);
        print(v3);

    }
    return 0;
}