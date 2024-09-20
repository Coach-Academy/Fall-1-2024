#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;

    int cnt;

    cnt = n/100;
    ans+= cnt;
    n -= (cnt*100);

    cnt = n/20;
    ans+=cnt;
    n-=(cnt*20);

    cnt = n/10;
    ans+=cnt;
    n-=(cnt*10);

    cnt = n/5;
    ans+=cnt;
    n-=(cnt*5);

    cnt = n/1;
    ans+=cnt;
    n-=(cnt*1);

    cout<<ans<<endl;



    return 0;
}