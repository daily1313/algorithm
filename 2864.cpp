#include <iostream>
#include <string>
using namespace std;
int num[10001];
int main()
{
	int n,m;
	cin>>n>>m;
	int cnt=0;
	unsigned long long int sum=0;
	for(int i=n;i<=m;i++){
		for(int j=1;j<=100;j++){
			if(j*j==i){
				num[cnt++]=i;
				sum+=i;
			}
			if(j*j>n){
				continue;
			}
		}
	}
	if(cnt==0){
		cout<<-1<<endl;
		return 0;
	}
	cout<<sum<<endl;
	cout<<num[0]<<endl;
	
	
}
