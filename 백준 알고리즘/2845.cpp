#include <iostream>
using namespace std;
int a[5];
int main()
{
	int L,P;
	cin>>L>>P;
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	for(int i=0;i<5;i++){
	cout<<a[i]-L*P<<' ';
	}
}
