#include <iostream>
using namespace std;

int gcd(int x,int y)
{
	int z;
	while(y!=0)
	{
		z = x % y;
		x=y;
		y=z;
	}
	return x;
}
int main()
{
	int a,b;
	char alpha[1];
	cin>>a>>alpha[0]>>b;
	cout<<a/gcd(a,b)<<alpha[0]<<b/gcd(a,b)<<'\n';
	
}
