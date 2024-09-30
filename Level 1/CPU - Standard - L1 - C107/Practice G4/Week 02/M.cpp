#include <iostream>
using namespace std;

int main()
{
    double v, t, s, d; cin>>v>>t>>s>>d;
    double time = d/v;
    if(time>=t && time<=s) cout<<"No";
    else cout<<"Yes";
    return 0;
}
