#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    string op;
    cin>>n;

    priority_queue<int, vector<int>, greater<int> > pq;
    vector<string> ans;
    
    for(int i=0 ; i<n ; i++){
        cin>>op;
        if(op=="insert"){
            cin>>x;
            pq.push(x);
            ans.push_back("insert " + to_string(x));
        } else if(op=="removeMin"){
            if(pq.empty()){
                ans.push_back("insert 0");
                pq.push(0);
            }
            pq.pop();
            ans.push_back("removeMin");
        } else {
            cin>>x;
            while(!pq.empty() && pq.top()<x){
                pq.pop();
                ans.push_back("removeMin");
            }
            if(pq.empty() || pq.top()>x){
                pq.push(x);
                ans.push_back("insert " + to_string(x));
            }
            ans.push_back("getMin " + to_string(x));
        }
    }

    cout<<ans.size()<<endl;
    for(string i : ans) cout<<i<<endl;
}