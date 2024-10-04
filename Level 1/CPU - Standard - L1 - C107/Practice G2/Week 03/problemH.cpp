#include <iostream>

using namespace std;

int main(){
	int x,y,n,ans=0;
	for(int i=1 ; i<=5; i++){ //row
		for(int j=1; j<=5 ; j++){ //columns
			cin>>n;
			if(n == 1){ // 3 5
				// if(i>=3 && j>=3) ans = (i-3) + (j-3);
				// else if(i<=3 && j<=3) ans =(3-i) + (3-j);
				// else if(i>=3 && j<=3) ans = (i-3) + (3-j);
				// else if(i<=3 && j>=3) ans = (3-i) + (j-3);
                if(i>=3) ans += (i-3);
                else ans += (3-i);

                if(j>=3) ans += (j-3);
                else ans += (3-j);
			}
		}
	}
	cout<<ans<<endl;
    
	return 0;
}
/*
0 0 0 0 0
0 0 0 0 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0

4 44 447
7 47 444
  77 474
  74 477
     774
     744
     747
     777
*/
