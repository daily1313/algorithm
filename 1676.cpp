#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	cin>>n;
	int cnt=0;
	for(i=5;i<=n;i*=i){
		cnt+=(n/i);
	}
	cout<<cnt<<endl;
}
