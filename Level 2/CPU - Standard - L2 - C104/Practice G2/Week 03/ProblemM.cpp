#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    queue<int> q;
    priority_queue< pair<int,int> > pq;
    vector<int> v((int)5e5+1, 0);
    
    int Q;
    cin>>Q;
    
    int x,m,idx=1;
    
    while(Q--){
    	cin>>x;
    	if(x==1){
    		cin>>m;
    		pq.push({m,-idx});
    		q.push(idx);
    		idx++;
    	} else if(x==2){
    		while(v[q.front()] == 1) q.pop();
    		cout<<q.front()<<' ';
    		v[q.front()]=1;
    		q.pop();
    	} else {
    		while(v[-pq.top().second] == 1) pq.pop();
    		cout<<-pq.top().second<<' ';
    		v[-pq.top().second] = 1;
    		pq.pop();
    	}
    }

}