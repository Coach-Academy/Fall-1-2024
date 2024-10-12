#include <iostream>
#include <vector>
#include  <map>
#define ll long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//#ifndef ONLINE_JUDGE
//    freopen("Input.txt", "r", stdin);
//    freopen("Output.txt", "w", stdout);
//#endif
    map<int,int>freq;
    map<int,int>freqoffreq;
    int q;
    cin>>q;
    while (q--){
        int t;
        cin>>t;
        if(t==1){
            int x;
            cin>>x;
            if(freqoffreq[freq[x]])
                freqoffreq[freq[x]]--;
            freq[x]++;
            freqoffreq[freq[x]]++;
        }
        else if(t==2){
            int x;
            cin>>x;
            if(freqoffreq[freq[x]])
                freqoffreq[freq[x]]--;
            if(freq[x])
                freq[x]--;
            freqoffreq[freq[x]]++;
        }
        else{
            int z;
            cin>>z;
            if(freqoffreq[z]>0)
                cout<<1<<"\n";
            else
                cout<<0<<"\n";
        }
    }
}

