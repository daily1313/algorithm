#include <iostream>
#include <algorithm>
using namespace std;
int d[100001];
int main()
{
	int n;
	cin>>n;
	d[1] = 0;
	d[2] = 1;
	d[3] = 0;
	d[4] = 2;
	d[5] = 1;
	d[6] = 3;
	if(n==1 || n==3){
		cout<<-1<<endl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(i>6){
		if((i-5)%5==0){
		d[i] = min(d[i-2],d[i-5])+1;
		}
		else{
			d[i] = d[i-2]+1;
		}
		}
	}
	cout<<d[n]<<endl;
	
}
