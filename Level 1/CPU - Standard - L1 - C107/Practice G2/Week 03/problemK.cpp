#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	bool lucky = true;
	for(int i=1 ; i<=n ; i++){
		if(n%i==0){
			int tmp=i;
			lucky = true;
			while(tmp>0){
				if(!(tmp%10 == 4 || tmp%10==7)){
					lucky = false;
				}
				tmp/=10;
			}
		}
		if(lucky == true) break;
	}
	
	if(lucky) cout<<"YES";
	else cout<<"NO";
	return 0;
}