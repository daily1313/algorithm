#include <iostream>
using namespace std;
int num[1001];

int main()
{
	int a,b;
	int cnt=0;
	for(int i=1;i<=45;i++){
		for(int j=1;j<=i;j++){
			if(cnt==1001){
				break;
			}
			num[cnt++]=i;
		}
	}
	cin>>a>>b;
	if(a==b)
	{
		cout<<num[a-1]<<endl;
		return 0;
	}
	unsigned long long sum=0;
	for(int k=a-1;k<b;k++){
		sum +=num[k];
	}
	cout<<sum<<endl;
}
