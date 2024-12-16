#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int sum(string s) {
    int res = 0;
    for (char i: s)
        res += (i - '0');
    return res;
}

int super(string s) {
    if (s.size() == 1)
        return sum(s); //stoi
    return super(to_string(sum(s)));
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--) {
        string s;
        int k;
        cin >> s >> k;
        int ans = super(s) *k;
        cout << super(to_string(ans)) << endl;
    }
    return 0;
}