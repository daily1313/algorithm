#include <iostream>
#include <queue>

using namespace std;
bool ans[201];
bool check[201][201];
int cap[3]; // 물통의 용량
int from[] = {0, 0, 1, 1, 2 ,2}; 
int to[] = {1, 2, 0, 2, 0 , 1}; 
// 물을 부을 수 있는 방법 (x->y, x->z, y->x, y->z, z->x, z->y)
int main()
{
    for(int i=0;i<3;i++)
    {
        cin>>cap[i];
    }
    int sum = cap[2];
    queue<pair<int,int>>q;
    q.push(make_pair(0,0));
    // A,B 물통 비어있기에 0,0 push
    check[0][0] = true;
    ans[cap[2]] = true; // 안 붙는 경우도 true, 왜냐하면 한 쪽이라도 물통이 비면 조건 통과
    while(!q.empty())
    {
        int cur[3];
        cur[0] = q.front().first; // A
        cur[1] = q.front().second; // B
        cur[2] = sum - cur[0] - cur[1]; 

        q.pop();

        for(int i=0;i<6;i++) {
            int next[3] = {cur[0], cur[1], cur[2]};
            next[to[i]] += next[from[i]];
            // 물을 from -> to로 다 부어놓음
            next[from[i]] = 0; // from의 물 양 0으로 초기화

            if(next[to[i]]>= cap[to[i]]) // to의 물 양이 수용량 초과하는 경우 
            {
                next[from[i]] = next[to[i]] - cap[to[i]]; // from 물 양 = 수용량 - to의 물 양
                next[to[i]] = cap[to[i]]; // to물의 양 = cap의 양
            }

            if(!check[next[0]][next[1]]) // 0번 1번의 물의 양 만든 적 없는 경우
            {
                check[next[0]][next[1]] = true;
                q.push(make_pair(next[0], next[1]));
                if(next[0] == 0) ans[next[2]] = true; // 물통 비어 있으면, 물의 양 만들 수 있음.
            }
        } 
    }

        for(int i=0;i<=cap[2];i++)
        {
            if(ans[i]) cout<<i<<' ';
        }

}