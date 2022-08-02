#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
using namespace std;
#define max 10
int n, e;
int graph[max][max];
void bfs(int node){
	bool visited[max]= {false};
	
	queue<int>myqueue;
	visited[node]=true;
	myqueue.push(node);
	
	while(!myqueue.empty()){
		int curr = myqueue.front();
		myqueue.pop();
	
	cout<<curr<<' ';
	for(int next = 0; next<n;++next){
		if(!visited[next] && graph[curr][next]){
			visited[next] = true;
			myqueue.push(next);	
		}
	}
	}
}
int main()
{
	cin>>n>>e;
	memset(graph,0,sizeof(graph));
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u][v]=graph[v][u]=1;
	}
	bfs(0);
	return 0;
}
