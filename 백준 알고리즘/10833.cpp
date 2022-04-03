#include <iostream>
using namespace std;
int n[101];
int a[101];
int b[101];
int main()
{
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		sum+=(b[i]%a[i]);
	}
	cout<<sum<<endl;
}
