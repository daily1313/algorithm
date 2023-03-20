#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
int s[11];
int b[11];
int s_sum = 1;
int b_sum = 0;
int n;
int ans = 2e9;
int res;
int visited[11];
void dfs(int res, int x1, int x2)
{
    
    ans = min(ans, res);
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            res = abs(x1 * s[i] - (x2 + b[i]));
            dfs(res, x1 * s[i], x2 + b[i]);
            visited[i] = false;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>b[i];
    }

    dfs(2e9-1, 1, 0);

    cout<<ans<<'\n';

}