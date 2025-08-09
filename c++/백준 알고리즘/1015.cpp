#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;


int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(make_pair(a,0));
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j) continue;
		    if(v[j].first>v[i].first) v[j].second++;
			else if(j>i && v[j].first==v[i].first) v[j].second++;  
		}
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].second<<' ';
	}
}
