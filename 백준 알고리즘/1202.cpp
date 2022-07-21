#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<pair<int,int>>v;
	vector<int>c;
	priority_queue<int>pq;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
		
	}
	sort(v.begin(),v.end());
	for(int i=0;i<k;i++)
	{

			int w;
			cin>>w;
			c.push_back(w);
	}
	sort(c.begin(),c.end());
	int cnt=0;
	long long sum=0;
	for(int i=0;i<k;i++){
		while(cnt<n && c[i]>=v[cnt].first)
		{
			pq.push(v[cnt++].second);
		}
		if(!pq.empty())
		{
			sum+=pq.top();
			pq.pop();	
		}		
	}
	cout<<sum<<'\n';
	

}
