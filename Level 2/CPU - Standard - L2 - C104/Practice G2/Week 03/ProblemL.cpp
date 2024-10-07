#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    priority_queue<int, vector<int>, greater<int> > pq;
    vector<string> ans; 
    while(n--){
        string str;
        cin>>str;
        if(str == "insert"){
            cin>>x;
            pq.push(x);
            ans.push_back("insert " + to_string(x));
        } else if(str == "getMin"){
            cin>>x;
                while(!pq.empty() && pq.top()<x){ 
                    pq.pop();
                    ans.push_back("removeMin");
                }

                if(pq.empty() || (!pq.empty() && pq.top() != x)){
                    ans.push_back("insert " + to_string(x));
                    pq.push(x);
                }

                ans.push_back("getMin " + to_string(x));
                // if(pq.top() >= x){
                //     pq.push(x);
                // } else { // 4 x=4
                //     pq.push(x);
                // }
    
        } else if(str == "removeMin"){
            if(!pq.empty()){
                ans.push_back("removeMin");
                pq.pop();
            } else {
                ans.push_back("insert 1");
                ans.push_back("removeMin");
            }
        }
    }
    cout<<ans.size()<<'\n';
    for(auto ch : ans) cout<<ch<<'\n';

}