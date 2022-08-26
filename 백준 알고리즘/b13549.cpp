#include <iostream>
#include <queue>
#define max 100001
using namespace std;
bool visited[max] = {false};


int main()
{
	int start,end;
	cin>>start>>end;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int,int>>> q; //오름차순 기반 정렬하기 위한 priority_queue 
	q.push({0,start});
	
	visited[start] = true;
	int count;
	while(!q.empty())
	{
		
		pair<int,int> cur = q.top();
		int count = q.top().first;
		int x = q.top().second;
		q.pop();
		if(x==end) {
			cout<<count<<'\n';
		}
		if(!visited[2*x] && 2*x<max)
		{
			q.push({count,2*x});
			visited[2*x] = true;
		}
		if(!visited[x+1] && x+1<max)
		{
			q.push({count+1,x+1});
			visited[x+1] = true;
		}
		if(!visited[x-1] && x-1>=0)
		{
			q.push({count+1,x-1});
			visited[x-1] = true;
		}
	}
	
}

