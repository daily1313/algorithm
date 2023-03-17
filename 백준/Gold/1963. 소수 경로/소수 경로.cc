#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
#include <cstring>
using namespace std;
int t;
bool number[10001];
int visited[10001];

void check()
{
    for(int i=2;i<=sqrt(10001);i++)
    {
        if(number[i])
        {
            for(int j=i+i;j<=10001;j+=i)
            {
                number[j] = false; 
            }
        }
    }
}
void bfs(int start)
{
    queue<int>q;
    q.push(start);
    visited[start] = 0;

    while(!q.empty())
    {
        int now = q.front();
        q.pop();

        for(int i=0;i<4;i++)
        {
            string number_string = to_string(now);
            for(int digit=0;digit<10;digit++)
            {
                number_string[i] = digit + '0';
                int next = stoi(number_string);
                if(next>=1000 && number[next] && visited[next]== -1)
                {
                    visited[next] = visited[now] + 1;
                    q.push(next);
                }
            }
        }
    }
}

int main()
{
    cin>>t;
    memset(number, true, sizeof(number));
    check();

    while(t--)
    {
        memset(visited, -1, sizeof(visited));
        int start, end;
        cin>>start>>end;
        bfs(start);
        if(visited[end]!=-1)
        {
            cout<<visited[end]<<'\n';
        }
        else
        {
            cout<<"Impossible"<<'\n';
        }

    }
    return 0;
    
}