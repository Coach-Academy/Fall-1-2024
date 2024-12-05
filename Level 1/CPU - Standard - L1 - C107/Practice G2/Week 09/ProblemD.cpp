#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        stack<char> st;
        string s;
        cin>>s;

        for(int i=0 ; s[i] ; i++){
            if(st.empty()){
                st.push(s[i]);
            } 
            else if((st.top()=='(' && s[i]==')') || (st.top()=='[' && s[i]==']') || (st.top()=='{' && s[i]=='}'))
                st.pop();
            else
                st.push(s[i]);
        }

        if(st.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}