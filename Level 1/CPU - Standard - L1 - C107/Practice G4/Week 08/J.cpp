#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        deque<int>dq(n);
        for(int i = 0 ; i < n ; i++){
            cin>>dq[i];
        }
        vector<long long>ans(n+2);
        for(int i = n ; i > 0  ; i--){
            while(dq.back()!=i){
                ans[i]++;
                dq.push_back(dq.front());
                dq.pop_front();
            }
            dq.pop_back();
        }
        for(int i = 1 ; i <= n ; i++){
            cout<<ans[i]<<' ';
        }
        cout<<'\n';
    }
	return 0;
}
