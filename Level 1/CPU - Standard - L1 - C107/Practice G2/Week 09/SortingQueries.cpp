#include <bits/stdc++.h>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int> > pq;
    queue<int> q;

    int t,x,input;
    cin>>t;

    while(t--){
        cin>>input;

        if(input==1){
            cin>>x;
            q.push(x);
        } else if(input==2){
            if(!pq.empty()){
                cout<<pq.top()<<endl;
                pq.pop();
            } else {
                cout<<q.front()<<endl;
                q.pop();
            }
        } else {
            while(!q.empty()){
                pq.push(q.front());
                q.pop();
            }
        }
    }
}