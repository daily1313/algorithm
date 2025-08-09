#include <iostream>
using namespace std;

int main()
{
	int a,b;
	int n;
	cin>>n;
	int cnt=0;
	for(a=1;a<=500;a++)
	{
		for(b=1;b<=a;b++){
			if(a*a==b*b+n)
			{
				cnt++;
			}
		}
	}
	cout<<cnt;
}
