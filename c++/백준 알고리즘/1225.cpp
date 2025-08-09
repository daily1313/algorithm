#include <iostream>
#include <cstring>
using namespace std;
char a[10001];
char b[10001];
int main()
{
	cin>>a>>b;
	int n = strlen(a);
	int m = strlen(b);
	unsigned long long int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum+=((a[i]-48)*(b[j]-48));
		}
	}
	cout<<sum<<'\n';
}
