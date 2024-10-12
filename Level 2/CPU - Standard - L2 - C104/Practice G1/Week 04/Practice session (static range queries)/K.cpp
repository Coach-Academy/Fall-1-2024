#include <iostream>
#include <vector>
#define ll long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    int n,k;
    cin>>n>>k;
    vector<int>vec1(n+1);
    for(int i=1;i<=n;i++)
        cin>>vec1[i];
    int ans=0;
    for(int i=1;i<=n;i++){
        int type;
        cin>>type;
        if(type==1) {
            ans += vec1[i];
            vec1[i]=0;
        }

    }
    for(int i=1;i<=n;i++)
        vec1[i]+=vec1[i-1];
    int temp=0;
    for(int i=1;i+k-1<=n;i++){
        temp=max(temp,vec1[i+k-1]-vec1[i-1]);
    }
    cout<<ans+temp<<"\n";
}

