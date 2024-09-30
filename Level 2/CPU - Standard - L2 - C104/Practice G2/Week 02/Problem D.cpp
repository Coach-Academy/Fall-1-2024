#include<bits/stdc++.h>
using namespace std;

void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    //freopen("interdimensional.in", "r", stdin);

    // freopen("time.out", "w", stdout);

}


#define sz(x) (int)x.size()
#define int long long

void burn(){
    string s;
    cin >> s;
    stack<char>st;
    for(int i = 0; i < sz(s); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')st.push(s[i]);
        else {
            if (st.empty()) {
                cout << "NO\n";
                return;
            }
            if (s[i] == '}' && st.top() == '{')st.pop();
            else if (s[i] == ')' && st.top() == '(')st.pop();
            else if (s[i] == ']' && st.top() == '[')st.pop();
            else {
                cout << "NO\n";
                return;
            }
        }
    }
    if (st.empty())cout << "YES\n";
    else cout << "NO\n";
}

int32_t main() {
    fast();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}