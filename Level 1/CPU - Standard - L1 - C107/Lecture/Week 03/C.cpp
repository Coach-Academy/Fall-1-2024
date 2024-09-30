#include <iostream>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int h ,x,y;
        cin >> h >> x >> y;
        h -= y;
        int cnt = 1;
        while(h > 0){
            h -= x ;
            cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}