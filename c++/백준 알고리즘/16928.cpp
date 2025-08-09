#include <iostream>
#include <queue>

using namespace std;
int dist[101];
int nex[101];
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= 100; i++)
    {
        nex[i] = i;
        dist[i] = -1;
    }
    // 거리 초기화

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        nex[x] = y;
    }
    // 사다리

    while (m--)
    {
        int x, y;
        cin >> x >> y;
        nex[x] = y;
    }
    // 뱀

    dist[1] = 0;
    queue<int> q;
    q.push(1);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 1; i <= 6; i++)
        {
            int y = x + i;
            if (y > 100)
                continue;
            y = nex[y];
            if (dist[y] == -1)
            {
                dist[y] = dist[x] + 1;
                q.push(y);
            }
        }
    }
    cout << dist[100];
    return 0;
}