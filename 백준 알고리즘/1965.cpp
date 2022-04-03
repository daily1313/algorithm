#include <iostream>
#include <algorithm>
using namespace std;
int d[1001];
int a[1001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int j;
	int max=1;
	for(i=0;i<n;i++){
		d[i] = 1;
		for(j=0;j<i;j++){
			if(a[j]<a[i]&&d[i]<d[j]+1){
				d[i] = d[j]+1;
			}
		}
		if(max<d[i]) max = d[i];
	}
	cout<<max<<'\n';
	
}
