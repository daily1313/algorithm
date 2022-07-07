#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;
bool cmp(vector<int> a, vector<int> b)
{
	return a[2]>b[2];
}
int main()
{
	int n;
	cin>>n;
	vector<vector<int>>v(n,vector<int>(n,0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>v[i][j];
		}
		sort(v[i].begin(),v[i].end());	
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<v[i][j]<<' ';
		}
		cout<<'\n';
	}
	
	
	
	
	
}
