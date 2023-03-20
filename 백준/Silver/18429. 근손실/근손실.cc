#include <iostream>
#include <vector>

using namespace std;


bool visited[9];
int energy[9];
int n,k;
int first = 500;
int cnt = 0;
void dfs(int idx, int now)
{
    if(idx == n && now >= 500)
    {
        cnt++;
        return; 
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i] && now >= 500)
        {
            visited[i] = true;
            dfs(idx+1, now + energy[i] - k);
            visited[i] = false;
        }
    }
}

int main()
{
    
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>energy[i];
    }

    dfs(0, first);

    cout<<cnt<<'\n';





}