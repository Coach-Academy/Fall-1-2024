#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n+2);
        vector<int>pos(n+2);
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            pos[v[i]] = i;
        }
        int last = n;
        for(int i = n ; i >= 1  ; --i){
            for(int j = pos[i] ; j < last ; j++){
                cout<<v[j]<<' ';
            }
            last = min(last, pos[i]);
        }
        cout<<'\n';
    }
	return 0;
}
