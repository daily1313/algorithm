#include <iostream>
#define INF 12345678
using namespace std;
int n, m, x;
int d[1001][1001];

int main()
{
    cin>>n>>m>>x;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            d[i][j] = INF;
            if(i==j) d[i][j] = 0;
        }
    }

    for(int i=0;i<m;i++)
    {
        int from, to, time;
        cin>>from>>to>>time;
        d[from][to] = time;
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(d[i][j] > d[i][k] + d[k][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    int ans = -1;
    for(int i=1;i<=n;i++)
    {
        if(ans < d[i][x] + d[x][i]) {
            ans = d[i][x] + d[x][i];
        }
    }
    cout<<ans<<'\n';
    return 0;

}