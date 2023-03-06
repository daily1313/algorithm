#include <bits/stdc++.h>

using namespace std;

vector<int>graph[20001];
queue<int>q;
bool visited[20001];
int d[20001];
void bfs(int start)
{
    q.push(start);
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        for(int i=0;i<graph[now].size();i++)
        {
            int end = graph[now][i];
            if(!visited[end])
            {
                visited[end] = true;
                d[end] = d[now] + 1;
                // 노드간 거리 1증가
                q.push(end);
            }
        }
    }
}
    
int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    
    for(int i=0;i<edge.size();i++)
    {
        graph[edge[i][0]].push_back(edge[i][1]);
        graph[edge[i][1]].push_back(edge[i][0]);
        // 노드 간 연결
    }
    bfs(1);
    
    int max_count = *max_element(d, d+n);
    
    for(int i=2;i<=n;i++)
    {
        if(d[i] == max_count) answer++;
    }
    
    return answer;
}