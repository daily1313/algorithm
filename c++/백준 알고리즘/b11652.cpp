#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

long long cmp(pair<long long,int>a,pair<long long,int>b)
{
	if(a.second == b.second) return a.first<b.first;
	return a.second>b.second;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	map<long long,int>m;
	map<long long,int>::iterator it;
	vector<pair<long long,int>>v;
	
	for(int i=0;i<n;i++)
	{
		long long num;
		cin>>num;
		m[num]++;
		
	}
	for(it=m.begin();it!=m.end();it++)
	{
		v.push_back(make_pair((*it).first,(*it).second));
	}
	sort(v.begin(),v.end(),cmp);
	
	cout<<v[0].first;
}
