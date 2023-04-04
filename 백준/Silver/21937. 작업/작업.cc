#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
vector<int>graph[100001];
bool visited[100001];
int d[100001];
int n, m, x;
int cnt = 0;
void dfs(int start)
{
    visited[start] = true;
    for(int i=0;i<graph[start].size();i++)
    {   
        if(!visited[graph[start][i]])
        {
            cnt++;
            dfs(graph[start][i]);
        }
    }

}

int main()
{
    cin>>n>>m;

    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        graph[b].push_back(a);
    }
    cin>>x;
    dfs(x);
    cout<<cnt<<'\n';
    return 0;

}