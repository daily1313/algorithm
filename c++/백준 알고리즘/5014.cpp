#include <iostream>
#include <queue>

using namespace std;
int dis[1000001]; // 거리 -> 버튼 횟수
bool check[1000001];
int main()
{
    int F, S, G, U, D; // 스타트링크 층 수, 현재 위치, 가야할 위치, 위, 아래 이동
    cin>>F>>S>>G>>U>>D;
    queue<int> q;
    q.push(S);
    check[S] = true;
    while(!q.empty())
    {
        int now = q.front();
        q.pop();
        if(now + U <= F && !check[now + U]) 
        {
            dis[now + U] = dis[now] + 1;
            check[now + U] = true;
            q.push(now+U);
        }
        // 위로 올라가는 경우
        if(now - D >= 1 && !check[now - D]) 
        {
            dis[now - D] = dis[now] + 1;
            check[now - D] = true;
            q.push(now-D);
        }
        // 아래로 내려가는 경우
    }


    if(check[G])
    {
        cout<<dis[G]<<'\n';
    }
    // 목적지 도달했으면, 횟수 출력
    else
    {
        cout<<"use the stairs"<<'\n';
    }
}