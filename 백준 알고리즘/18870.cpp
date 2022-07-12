#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,a[20001],b[20001];
	cin>>t;
	int n,m;
	while(t--)
	{
		int cnt=0;
		cin>>n>>m;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m;i++){
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		for(int i=n-1;i>=0;i--)
		{
			for(int j=m-1;j>=0;j--)
			{
				if(a[i]-b[j]>0) cnt++;
				
			} 
			
		}
		cout<<cnt<<'\n';
	}

	
	
}
