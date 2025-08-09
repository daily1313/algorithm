#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>v1;
	vector<int>v2;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			v1.push_back(a);
		}
		int m;
		cin>>m;
		
		for(int i=0;i<m;i++)
		{
			int b;
			cin>>b;
			v2.push_back(b);
		}
		sort(v1.begin(),v1.end());
		for(int i=0;i<v2.size();i++)
		{
			if(binary_search(v1.begin(),v1.end(),v2[i])) cout<<1<<'\n';
			else cout<<0<<'\n';
		}
		v1.clear();
		v2.clear();
	}
}
