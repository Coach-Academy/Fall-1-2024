#include <iostream>

using namespace std;

int main(){
    int n,cnt1=0,cnt2=0,cnt3=0, cnt4=0;
    cin>>n;
    
    for(int i=1; i<=n ;i++){
    	int tmp;
    	cin>>tmp;
    	
    	if(tmp==1) cnt1++;
    	else if(tmp==2) cnt2++;
    	else if(tmp==3) cnt3++;
    	else cnt4++;
    }
    
    int taxi = cnt4;
    
    taxi+=cnt3;
    
    if(cnt1>cnt3) cnt1-=cnt3;
    else cnt1=0;
    
    taxi += (cnt2/2);
    
    if(cnt2%2 == 1) 
    {
    	taxi++;
    	if(cnt1>2) cnt1-=2;
    	else cnt1 = 0;
    }
    
    
    if(cnt1>0){
    	cnt1+=3;
    	taxi = (cnt1/4);
    }
	cout<<taxi;
	return 0;
}


