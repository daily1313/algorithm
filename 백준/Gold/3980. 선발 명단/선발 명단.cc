#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
int ans = 0;
int arr[12][12];
int n;
bool player[12];
void dfs(int idx, int sum)
{
    if(idx == 11)
    {
        ans = max(ans, sum);
        return;
    }
    for(int i=0;i<11;i++)
    {
        if(arr[idx][i]!=0 && !player[i])
        {
            player[i] = true;
            dfs(idx+1, sum + arr[idx][i]);
            player[i] = false;
        }
    }
}
int main()
{
    cin>>n;
    
    while(n--)
    {
        memset(player, false, sizeof(player));
        ans = 0;
        for(int i=0;i<11;i++)
        {
            for(int j=0;j<11;j++)
            {
                cin>>arr[i][j];
            }
        }
        
        dfs(0, 0);
        cout<<ans<<'\n';
    }

    return 0;

}