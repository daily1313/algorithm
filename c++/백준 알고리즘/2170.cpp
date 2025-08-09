#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int x,y;
	int n;	
	cin>>n;
	vector<pair<int,int>>v;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end());
	
	int sum=0;
	int start = v[0].first;
	int end = v[0].second;
	for(int i=1;i<n;i++)
	{
		if(v[i].first <= end)
		{
			end = max(end,v[i].second);
		}
		else{
			sum+= (end-start);
			start = v[i].first;
			end = v[i].second;
		}
	}
	sum += (end -start);
	cout<<sum<<'\n';	
	
}
