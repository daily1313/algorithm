#include <iostream>
#include <cstring>
#include <vector>
#define max 101

using namespace std;
vector<int>v[101];
int visited[max];
int board[max][max] = {0};
int n,check;
void dfs(int node)
{
	
	for(int i=0;i<v[node].size();i++)
	{
		if(!visited[v[node][i]]){
			visited[v[node][i]] = 1;
			dfs(v[node][i]);
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>check;
			if(check){
				v[i].push_back(j);
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		memset(visited,0,sizeof(visited));
		dfs(i);
		for(int j=0;j<n;j++){
			cout<<visited[j]<<' ';
		}
		cout<<'\n';
	}
}
