#include <iostream>
#include <algorithm>
using namespace std;
int d[1001];
int a[1001];
int v[1001];
void go(int p);
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
		d[i]=1;
		v[i]=-1;
		for(j=0;j<i;j++){
			if(a[j]<a[i]&&d[i]<d[j]+1){
				d[i] = d[j]+1;
				v[i]=j;
			}
		}
	}
	int p=0;
	int ans = d[0];
	for(i=0;i<n;i++){
		if(ans<d[i]){
			ans = d[i];
			p = i;
		}
	}
	cout<<ans<<'\n';
	go(p);
	cout<<'\n';
	return 0;
	
}
void go(int p)
{
	if(p==-1){
		return;
	}
	go(v[p]);
	cout<<a[p]<<' ';
}
