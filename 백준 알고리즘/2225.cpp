#include <iostream>
using namespace std;
const long long mod = 1000000009;
int d[200][200];
int main()
{
	int k,n;
	int i,j,l;
	d[0][0] = 1LL;
	cin>>n>>k;
	for(i=1;i<=k;i++){
		for(j=0;j<=n;j++){
			for(l=0;l<=j;l++){
				d[i][j] += d[i-1][j-l];
				d[i][j] %= mod;
			}
		}
	}
	cout<<d[k][n]<<endl;
}
