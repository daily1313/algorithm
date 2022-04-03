#include <iostream>
#include <algorithm>
using namespace std;
int a[3];
int sum[1001];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	for(int j=0;j<3;j++)
	{
		cin>>a[j];
	}
	if(a[0]==a[1] && a[1]==a[2] && a[0]==a[2]){
		sum[i]=10000+a[0]*1000;
	}
	else if(a[0]==a[1] && a[1] != a[2] && a[0] != a[2]){
		sum[i]=1000+a[0]*100;
	}
	else if(a[0]!=a[1] && a[1] == a[2] && a[0] != a[2]){
		sum[i]=1000+a[1]*100;
	}
	else if(a[0]!=a[1] && a[1] != a[2] && a[0] == a[2]){
		sum[i]=1000+a[2]*100;
	}
	else if(a[0]!=a[1] && a[1] != a[2] && a[0] != a[2]){
		sort(a,a+3);
		sum[i]=a[2]*100;
	}
	
		
	}
	sort(sum,sum+n);
	cout<<sum[n-1]<<endl;
}
