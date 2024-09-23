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
#define ll long long


int arr[100000][3], n;


int rec(int i) {
    // base case
    if (i == n) {
        return INT_MAX;
    }
    //body
    // 0 -> min | 1 -> price | 2 -> stock
    if (arr[i][2] > arr[i][0]) {
        return min(arr[i][1], rec(i + 1));
    }
    else {
        return rec(i + 1);
    }
}

void burn(){
    cin >> n;
    // arr[0][0] min | arr[0][1] price | arr[0][2] stock
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    int ret = rec(0);
    cout << (ret == INT_MAX?-1:ret);
}

int32_t main() {
    fast();
    int t = 1;
    //cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}