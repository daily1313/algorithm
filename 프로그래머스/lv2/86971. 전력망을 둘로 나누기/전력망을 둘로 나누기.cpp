#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool graph[201][201]; 
vector<bool> visited; 

int DFS(int now, int n)
{
    if(visited[now]) return 0;
    visited[now] = true;
    
    int cnt = 1;
    for(int next=1; next<=n; next++)
    {
        if(!graph[now][next]) continue;
        
        cnt += DFS(next, n);
    }
    return cnt;
}

int solution(int n, vector<vector<int>> wires) 
{
    int answer = 2100000000;
    
    for(int i=0; i<wires.size(); i++) 
    {
        int u = wires[i][0];
        int v = wires[i][1];
        graph[u][v] = graph[v][u] = true;
    }
    
    for(int i=0; i<wires.size(); i++) 
    {
        int u = wires[i][0];
        int v = wires[i][1];
        graph[u][v] = graph[v][u] = false; 
        
        vector<int> count;
        visited = vector<bool>(n+1, false);
        for(int j=1; j<=n; j++) 
        {
            int temp = DFS(j, n);
            if(!temp) continue; 
            count.push_back(temp);
        }
        answer = min(answer, abs(count[0]-count[1])); 
        graph[u][v] = graph[v][u] = true; 
    }
    
    return answer;
}