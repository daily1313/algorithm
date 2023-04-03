#include <iostream>
#define INF 9876543;
using namespace std;
int d[201][201];
int res[201][201];
int main()
{
    int n, m;
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
        int a,b,c;
        cin>>a>>b>>c;
        d[a][b] = c;
        d[b][a] = c;
        res[a][b] = b;
        res[b][a] = a;
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j) continue;
                if(d[i][j] > d[i][k] + d[k][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                    res[i][j] = res[i][k];
                }
            }
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j) 
            {
                cout<<"- ";
            }
            else if(res[i][j] != 0)
            {
                cout<<res[i][j]<<' ';
            }
        }
        cout<<'\n';
    }
    return 0;
}