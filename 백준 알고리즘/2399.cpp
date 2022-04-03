#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int x[10001];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
	}
	unsigned long long int sum=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			sum+=abs(x[i]-x[j]);
		}
	}
	sum*=2;
	cout<<sum<<endl;
}
