#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int q,o,x;
    cin>>q;
    queue<int> qe;
    priority_queue<int, vector<int>, greater<int> > pq;

    while(q--){
        cin>>o;
        if(o==1){
            cin>>x;
            qe.push(x);
        } else if( o==2){
            if(pq.empty()){
                cout<<qe.front()<<'\n';
                qe.pop();
            } else {
                // cout<<-pq.top()<<'\n';
                cout<<pq.top()<<'\n';
                pq.pop();
            }
        } else {
            while(!qe.empty()){
                // pq.push(-qe.front());
                pq.push(qe.front());
                qe.pop();
            }
        }
    }

}