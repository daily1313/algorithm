#include <iostream>

using namespace std;
int relation[101][101];
int N,M;

int main()
{
    cin>>N>>M;
    for(int i=0;i<M;i++)
    {
        int a,b;
        cin>>a>>b;
        relation[a][b] = 1;
    }

    for(int k=1;k<=N;k++)
    {
        for(int i=1;i<=N;i++)
        {
            for(int j=1;j<=N;j++)
            {
                if(relation[i][k] == 1 && relation[k][j] == 1) {
                    relation[i][j] = 1;
                }
            }
        }
    }

    int start = 1;
    int count = 0;
    for(int start = 1; start<=N; start++)
    {
        count = 0;
        for(int i=1;i<=N;i++)
        {
            if(start == i) continue;
            if(relation[start][i] == 0 && relation[i][start] == 0) 
            {
                count++;
            }
        }
        cout<<count<<'\n';
    }

}


