#include <iostream>
using namespace std;

int main() {
	int n,level=1,need=1,height=0;
	cin>>n;
	
	while(need<=n){
		n-=need;
		level++;
		need+=level;
		height++;
	}
	
	cout<<height;
	return 0;
}