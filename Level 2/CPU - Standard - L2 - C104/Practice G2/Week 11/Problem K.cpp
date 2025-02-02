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
    // freopen("bank.in", "r", stdin);
    // freopen("bank.out", "w", stdout);
}

#define sz(x) (int)x.size()
#define int long long
#define double long double

int MOD=1000000007 ;
int mul(int a, int b) { return (a * 1LL * b) % MOD; }
int add(int a, int b) { return (a + b) % MOD; }
int sub(int a, int b) { return (a - b + MOD) % MOD; }


int modpow(int n, int k) {
    if (k == 0) return 1;
    int cur = modpow(n, k / 2); cur = mul(cur, cur);
    return (k & 1 ? mul(cur, n) : cur);
}
int divide(int a, int b) {
    return mul(a, modpow(b, MOD - 2));
}
const int N = 2e5 + 1;
vector<int>Fact(N) ;
int ncr(int n,int m)
{
    if( n<m ) return 0 ;
    int Val = Fact[n]%MOD * modpow( (Fact[n-m]%MOD * Fact[m]%MOD )%MOD , MOD-2 ) ;
    return Val%MOD ;
}
void Pre()
{
    Fact[0]=Fact[1]=1 ;
    for( int i=2 ; i<N ; ++i ){
        Fact[i] = ( Fact[i-1]%MOD * i%MOD )%MOD ;
    }
}
void burn(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>a(n);
    for(auto &i : a)cin >> i;
    sort(a.begin(), a.end());
    int l = 0, r = 0, ans = 0;
    while(r < n) {
        if (a[r] - a[l] <= k)r++;
        else {
            int can = r - l - 1;
            ans = add(ans, ncr(can, m - 1));
            l++;
        }
    }
    while(l + m <= n) {
        ans = add(ans, ncr(n - l - 1, m - 1));
        l++;
    }
    cout << ans << "\n";
}

int32_t main() {
    fast();
    Pre();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        burn();
    }
}