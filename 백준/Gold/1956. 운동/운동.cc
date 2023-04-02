#include <iostream>
#include <vector>
#include <queue>
#include <cstring>


using namespace std;
int ans = 2100000000;
int INF = 98765432;
int v,e;
int d[401][401];

void floydWarshall() {
    
    for(int k=1;k<=v;k++)
    {
        for(int i=1;i<=v;i++) 
        {
            for(int j=1;j<=v;j++) 
            {
                if(d[i][k] + d[k][j] < d[i][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
}


int main()
{
    cin>>v>>e;
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            d[i][j] = INF;
        }
    }
    for(int i=0;i<e;i++)
    {
        int a, b, c;
        cin>>a>>b>>c;
        d[a][b] = c;
    }

    floydWarshall();

    for(int i=1;i<=v;i++)
    {
        ans = min(d[i][i], ans);
    }

    if(ans==INF) {
        cout<<-1<<'\n';
        return 0;
    }
    cout<<ans<<'\n';
    return 0;
}