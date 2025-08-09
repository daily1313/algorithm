#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int num[100001];
int main()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
	{
		cin>>num[i];	
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			v.push_back(num[i]+num[j]);
		}
	}
	int ans;
	cin>>ans;
	int cnt=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==ans) cnt++;
	}
	cout<<cnt;
}
