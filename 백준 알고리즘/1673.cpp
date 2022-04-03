#include <iostream>
using namespace std;

int main()
{
	int n,k;
	while(scanf("%d %d",&n,&k)!=EOF){
		unsigned long long int sum=0;
		sum+=n;
		while(n/k>=1){
			sum+=n/k;
			n=(n/k+n%k);
		}
		cout<<sum<<'\n';
	}
}
