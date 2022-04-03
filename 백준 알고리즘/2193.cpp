#include <iostream>
using namespace std;
long long int d[91][2];
int main()
{
	int n;
	int i;
	d[1][0] = 0;
	d[1][1] = 1;

	cin>>n;
	for(i=2;i<91;i++){
		d[i][0] = d[i-1][0]+d[i-1][1];
		d[i][1] = d[i-1][0];
	}
	cout<<d[n][0]+d[n][1]<<endl;
}
