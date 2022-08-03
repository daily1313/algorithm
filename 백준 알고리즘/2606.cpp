#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#define max 101
using namespace std;
int n, com;
int cnt=0;
int graph[max][max];
void bfs(int node){
	bool visited[max]= {false};
	
	queue<int>myqueue;
	visited[node]=true;
	myqueue.push(node);
	
	while(!myqueue.empty()){
		int curr = myqueue.front();
		myqueue.pop();
		for(int next = 1; next<=com;++next){
			if(!visited[next] && graph[curr][next]){
				visited[next] = true;
				myqueue.push(next);	
				cnt++;
		}
	}
	}
	cout<<cnt;
}
int main()
{
	cin>>com;
	cin>>n;
	memset(graph,0,sizeof(graph));
	for(int i=0;i<n;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u][v]=graph[v][u]=1;
	}
	bfs(1);
	return 0;
}
