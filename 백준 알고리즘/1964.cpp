#include <iostream>
using namespace std;
unsigned long long int result[10000001];
int main()
{
	int n;
	result[1]=5;
	cin>>n;
	for(int i=1;i<=n;i++){
		result[i+1]=result[i]+(7+3*(i-1));
		result[i+1]%=45678;
	}
	cout<<result[n]<<endl;
}
