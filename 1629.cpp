#include <iostream>
using namespace std;
long long result(int a,int b,int c);
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<result(a%c,b,c);
	
}
long long result(int a,int b,int c)
{
	if(b==1) return a;
	long long half = result(a,b/2,c);
	if(b%2==0) return (half * half) % c;
	else return ((half*half)%c*a)%c;
	
}
