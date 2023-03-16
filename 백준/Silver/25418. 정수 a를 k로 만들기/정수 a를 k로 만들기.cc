#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
int k;
int answer = 2e9;
int visited[1000001];
void dfs(int num, int depth)
{
    if(num == k) 
    {
        answer = min(answer, depth);
        return;
    }
    else if(num > k) return;
    dfs(num + 1, depth+1);
    dfs(num * 2, depth+1);
}

void bfs(int num) {

    queue<int>q;
    q.push(num);
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        if(now == k) return;

        if(now+1 <= k && !visited[now+1])
        {
            q.push(now+1);
            visited[now+1] = visited[now] + 1;
        }
        if(now*2 <= k && !visited[now*2])
        {
            q.push(now*2);
            visited[now*2] = visited[now] + 1;
        }

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin>>a>>k;
    bfs(a);
    cout<<visited[k]<<'\n';
}