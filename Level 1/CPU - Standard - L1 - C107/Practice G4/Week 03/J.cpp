#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0; cin>>n;
    int one = 0, two = 0, three = 0, four = 0;
    for(int i = 0 ; i < n ; i++){
        int x; cin>>x;
        one+=(x==1);
        two+=(x==2);
        three+=(x==3);
        four+=(x==4);
    }
    ans+=four;
    int m = min(one, three);
    ans+=m;
    one-=m;
    three-=m;
    ans+=three;
    ans+=ceil((one + two*2)/4.0);
    cout<<ans;
    return 0;
}
