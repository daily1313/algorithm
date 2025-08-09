#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int relation[51][51];
vector<int>result;
vector<int>dist(51);
int v;
int ans = 2e9;
int min_ans;
void floydWarshall() {
    
    for(int k=1;k<=v;k++)
    {
        for(int i=1;i<=v;i++) 
        {
            for(int j=1;j<=v;j++) 
            {
                if(i==j) continue;
                relation[i][j] = min(relation[i][k] + relation[k][j], relation[i][j]);
            }
        }
    }


    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(i==j) continue;
            dist[i] = max(dist[i], relation[i][j]);
        }

        if(dist[i] < ans) 
        {
            ans = dist[i];
        }
    }

    for(int i=1;i<=v;i++)
    {
        if(dist[i] == ans) result.push_back(i);
    }
}

int main()
{
    

    cin>>v;

    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
            if(i==j) continue;
            relation[i][j] = 987654321;
        }
    }

    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a==-1 || b==-1) break;
        relation[a][b] = 1;
        relation[b][a] = 1;
    }

    floydWarshall();

    cout<<ans<<' '<<result.size()<<'\n';
    for(auto elem : result) 
    {
        cout<<elem<<' ';
    }

}