#include <iostream>
#include <queue>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	priority_queue<int,vector<int>,greater<int>>result;
	for(int i=0;i<n;i++)
	{
		int s,e;// 시작 시간, 끝나는 시간 
		cin>>s>>e;
		pq.push(make_pair(s,e));
	}
	result.push(pq.top().second);
	pq.pop();
	cout<<result.top();
	while(!pq.empty())
	{
		if(result.top()<=pq.top().first)
		{
			result.push(pq.top().second);
			result.pop();
		}
		else
		{
			result.push(pq.top().second);
		}
		pq.pop();
	}
	cout<<result.size();
}
