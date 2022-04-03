#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int money;
		cin>>money;
		int a = money/25;
		int b = money%25/10;
		int c =	money%25%10/5;
		int d = money%25%10%5/1;
		cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n';
	}
}
