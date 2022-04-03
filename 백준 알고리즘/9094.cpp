#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int cnt=0;
		int n,m,a,b;
		cin>>n>>m;
		for(int a=1;a<n;a++){
			for(int b=a+1;b<n;b++){
				if((a*a+b*b+m)%(a*b)==0) cnt++;
			}
		}
		cout<<cnt<<endl;
	}
}
