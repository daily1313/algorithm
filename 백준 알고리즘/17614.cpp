#include <iostream>
using namespace std;
int getcount(int n)
{
	int cnt=0;
	while(n){
		if(n%10==3||n%10==6||n%10==9) cnt++;
		n/=10;
	}
	return cnt;
}
int main()
{
	int n,cnt;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=getcount(i);
	}
	cout<<sum;
	
}
