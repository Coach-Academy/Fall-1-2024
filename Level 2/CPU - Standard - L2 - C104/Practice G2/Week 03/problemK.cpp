#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,x;
    cin>>t;
	map<int, int> m,freq;
    while(t--){
        cin>>n;
        m.clear();
        freq.clear();
        for(int i=0 ; i<n ; i++){
        	cin>>x;
        	m[x]++;
        	freq[m[x]]++;
        }
        int ans = INT_MAX;
        for(auto it=freq.begin() ; it!=freq.end() ; it++){
        	int tmp = n - ((it->first) * (it->second));
        	ans = min(ans, tmp);
        }
        cout<<ans<<'\n';
    }

}