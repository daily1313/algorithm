#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m,a,b;
	cin>>n>>m;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	for(int i=0;i<m;i++)
	{
		cin>>b;
		v.push_back(b);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<' ';
	}
}
