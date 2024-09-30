#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    int last = n%10, first = n/100;
    cout<<(last==first ? "Yes" : "No");
    return 0;
}
