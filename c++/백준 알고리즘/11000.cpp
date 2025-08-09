#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

vector<pair<int,int>> r;
priority_queue<int,vector<int>,greater<int>>pq;
//두 번째 원소의 오름차순 정렬하기 위한 우선순위 큐  
int main()
{
	int n;
	cin>>n;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		r.push_back(make_pair(a,b));
	}
	sort(r.begin(),r.end());
	pq.push(r[0].second); //첫번째 끝나는 시간 pq에 추가
	for(int i=1;i<n;i++)
	{
		if(pq.top()<=r[i].first)
		{
			pq.pop();
			pq.push(r[i].second);
		}
		else
		{
			pq.push(r[i].second);
		}
	 }
	 cout<<pq.size(); 
}
