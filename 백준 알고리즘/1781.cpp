#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <tuple>
#include <queue>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
	return p1.second>p2.second;
}
int main()
{
	int n;
	cin>>n;
	vector<pair<int,int>>v;
	priority_queue<int>pq;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	sort(v.begin(),v.end(),cmp);
	long long sum = 0;

	for(int i=0;i<n;i++)
	{
		 if(pq.size()<v[i].first)
		 {
		 	pq.push(v[i].second);
		 }
		 else
		 {
		 	if(pq.top()<v[i].second)
		 	{
		 		pq.pop();
				pq.push(v[i].second);	
			}
		 }
		 
	}
	while(!pq.empty())
		 {
		 	sum += pq.top();
		 	pq.pop();
		 }
	cout<<sum<<'\n';
	
}
