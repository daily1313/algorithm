#include <iostream>
#include <cstring>
#include <stack>
//스택을 이용한 dfs구현
//재귀호출을 많이하면 스택오버플로우가 발생. 이를 많이하기 위해 전역변수로 선언  
#define max 10
int n, e;
int graph[max][max];
using namespace std;
void dfs(int node){
	bool visited[max] = {false}; // stack을 이용한 dfs구현은 재귀호출을 사용하지 않기 때문에 로컬변수로 초기화 
	stack<int> mystack;
	mystack.push(node);
	
	while(!mystack.empty()){
		int curr = mystack.top();
		mystack.pop();
		if(visited[curr]) continue;
		visited[curr]=true;
		cout<<curr<<'\n';
		for(int next=0;next<n;++next)
		{
			if(!visited[next] && graph[curr][next]){
				mystack.push(next);
			}
		}
	}



}

int main()
{
	cin>>n>>e;
	memset(graph, 0, sizeof(graph));
	for(int i=0;i<e;i++)
	{
		int u,v;
		cin>>u>>v;
		graph[u][v]=graph[v][u]=1;
	}
	dfs(0);
	return 0;
}
