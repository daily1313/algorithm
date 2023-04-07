#include <iostream>
#include <cstring>
using namespace std;
int relation[501][501];
int n, m;
// 1 : a의 키 < b의 키 2 : a의 키 > b의 키
int main()
{

    cin>>n>>m;
    memset(relation, false, sizeof(relation));
    for(int i=0;i<m;i++)
    {
        int a, b;
        cin>>a>>b;
        relation[a][b] = 1;
        relation[b][a] = 2;
    }

    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(relation[i][k] == 1 && relation[k][j] == 1)
                {
                    relation[i][j] = 1;
                }
                if(relation[i][k] == 2 && relation[k][j] == 2)
                {
                    relation[i][j] = 2;
                }
            }
        }
    }

    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        bool check = true;
        for(int j=1;j<=n;j++)
        {
            if(i==j) continue;
            if(relation[i][j] != 1 && relation[i][j] != 2) 
            {
                check = false;
                break;
            }
        }
        if(check) ans++;
    }
    cout<<ans<<'\n';
}