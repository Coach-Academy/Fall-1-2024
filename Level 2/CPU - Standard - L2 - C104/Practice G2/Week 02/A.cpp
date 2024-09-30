#include<bits/stdc++.h>
using namespace std;

void fast() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //#ifndef ONLINE_JUDGE
    //    freopen("input.txt", "r", stdin);
    //    freopen("output.txt", "w", stdout);
    //#endif
    //freopen("interdimensional.in", "r", stdin);

    // freopen("time.out", "w", stdout);

}


#define sz(x) (int)x.size()

void burn(){
    int n, d;
    cin >> n >> d;
    deque<int>dq(n);
    for(int i = 0; i < n; i++) {
        cin >> dq[i] ;
    }
    while(d--) {
        dq.push_back(dq.front());

        dq.pop_front();
    }
    for(int i = 1; i <= n; i++) {
        cout << dq[i - 1] << ' ';
    }
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}