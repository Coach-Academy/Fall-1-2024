#include <bits/stdc++.h>
using namespace std;

vector<int> mergeSort(vector<int>v, long& swapCount){
    if(v.size()<=1) return v;
    int md = (v.size()/2)-1;
    vector<int>left = vector<int>(v.begin(), v.begin()+md+1);
    vector<int>right = vector<int>(v.begin()+md+1, v.end());
    left = mergeSort(left, swapCount);
    right = mergeSort(right, swapCount);

    vector<int>res;
    int l = 0, r = 0;

    while(l < left.size() || r < right.size()){
        if(l < left.size() && r < right.size()){
            if(left[l] > right[r]){
                swapCount+= left.size()-l;
                res.push_back(right[r]);
                r++;
            }else{
                res.push_back(left[l++]);
            }
        }
        else if(l < left.size()){
            res.push_back(left[l]);
            l++;
        }
        else{
            res.push_back(right[r++]);
        }
    }
    return res;
}

long CountInversion(vector<int>v){
    long swapCount = 0;
    mergeSort(v, swapCount);
    return swapCount;
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        for(auto& it : v) cin>>it;
        cout<<CountInversion(v)<<'\n';
    }
    return 0;
}
