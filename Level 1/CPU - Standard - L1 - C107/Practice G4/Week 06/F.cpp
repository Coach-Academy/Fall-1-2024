#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int arr[N];
int main()
{
    int n; cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int best = arr[0], worst = arr[0], cnt = 0;
    for(int i = 1 ; i < n ; i++){
        if(arr[i]>best){
            best = arr[i];
            cnt++;
        }
        else if(arr[i]<worst){
            worst = arr[i];
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
