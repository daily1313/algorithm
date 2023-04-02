#include <iostream>
#define INF 10000000
using namespace std;
int n, m;
int a, b, c;
int d[101][101];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            d[i][j] = INF;
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>c;
        if(d[a][b] != INF) 
        {
            if(d[a][b] > c) {
                d[a][b] = c;
            } 
        }
        else d[a][b] = c;
    }
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(d[i][j] > d[i][k] + d[k][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                }
                if(i==j) d[i][j] = 0;
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(d[i][j]==INF)
            {
                cout<<0<<' ';
            }
            else
            {
                cout<<d[i][j]<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}