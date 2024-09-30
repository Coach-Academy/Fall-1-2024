#include<bits/stdc++.h>
using namespace std;

void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //freopen("interdimensional.in", "r", stdin);

    // freopen("time.out", "w", stdout);

}


#define sz(x) (int)x.size()
#define int long long

void burn(){
    int n,  m;
    cin >> n >> m;
    queue<int>q1, q2;
    for(int i = 0; i < n; i++) {
         int x;
        cin >> x;
        q1.push(x);
        q2.push(i + 1);
    }
    while(q1.size() > 1) {
        int val = q1.front(),  index = q2.front();
        q1.pop();
        q2.pop();
        if (val > m) {
            q1.push(val - m);
            q2.push(index);
        }
    }
    cout << q2.front();
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}