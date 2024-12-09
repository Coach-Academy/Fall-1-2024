#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    queue<int>q;
    int n; cin>>n;
    while(n--){
        int x; cin>>x;
        if(x==1){
            int y; cin>>y;
            q.push(y);
        }
        else if(x==2){
            if(!q.empty()){
                q.pop();
            }
        }
        else if(x==3){
            if(q.empty())
                cout<<"Empty!\n";
            else cout<<q.front()<<'\n';
        }
    }
	return 0;
}
