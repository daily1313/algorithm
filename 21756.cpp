#include <iostream>
using namespace std;
int a[100001];
int b[100001];
int main()
{
	int i=0;
	while(1)
	{
		
		cin>>a[i]>>b[i];
		if(a[i]==0 && b[i]==0){
			return 0; 
		}
		if(a[i]>b[i]) cout<<"Yes"<<'\n';
		else cout<<"No"<<'\n';
		i++;
	}
}
