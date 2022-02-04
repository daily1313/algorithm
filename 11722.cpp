#include <iostream>
int a[1001];
int m[1001];
using namespace std;

int main()
{
	int i,j,k;
	int n;
	cin>>n;
	for(k=n-1;k>=0;k--)
	{
		cin>>a[k];
	}
	int max=1;
	for(i=0;i<n;i++){
		m[i]=1;
		for(j=0;j<i;j++){
			if(a[j]<a[i] && m[i]<m[j]+1){
				m[i]=m[j]+1;
			}
			if(max<m[i]) max =m[i];
		}
	}
	cout<<max<<'\n';
}
