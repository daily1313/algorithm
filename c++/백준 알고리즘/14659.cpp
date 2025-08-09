#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int a[100001];
int cnt[100001]={0};
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int *L = new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>L[i];	
	}
	int result =0;
	for(int j=0;j<n;j++)
	{
		int cnt=0;
		for(int k=j+1;k<n;k++)
		{
			if(L[j]>L[k])
			{
				cnt += 1;
			}
			else
			{
				break;
			}
		}
		result = max(result,cnt);	
	}
	cout<<result<<'\n';
			
}
