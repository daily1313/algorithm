#include <iostream>

using namespace std;
int rocks[100001];
int n;
int cnt = 0;
int start;
bool visited[100001];
void dfs(int now)
{
    if(now < 1 || now > n)
    {
        return;
    }
    visited[now] = true;
    dfs(now + rocks[now]);
    dfs(now - rocks[now]);
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>rocks[i];
    }

    cin>>start;
    
    dfs(start);

    for(int i=1;i<=n;i++)
    {
        if(visited[i]) cnt++;
    }

    cout<<cnt<<'\n';
}