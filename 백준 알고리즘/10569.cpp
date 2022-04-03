#include <iostream>
using namespace std;
int v[101];
int e[101];
int main()
{
	int t;
	int n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>v[i]>>e[i];
		cout<<2-v[i]+e[i]<<'\n';
	}
}
