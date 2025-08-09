#include <iostream>
#include <queue>
using namespace std;
bool visited[200001] = {false};
int main()
{
	int start,end;
	queue<pair<int,int>>q;
	cin>>start>>end;
	q.push({start,0});
	visited[start] = false;
	while(!q.empty())
	{
		
		int position = q.front().first;
		int success = q.front().second;
		q.pop();
		if(position<0 || position>100000) continue;
		if(position == end) {
			cout<<success<<'\n';
			break;
		}
		if(!visited[position*2])
		{
			visited[position*2] = true;
			q.push({position*2,success+1});
		}
		if(!visited[position+1])
		{
			visited[position+1] = true;
			q.push({position+1,success+1});
		}
		if(!visited[position-1])
		{
			visited[position-1] = true;
			q.push({position-1,success+1});
		}
	}
}
