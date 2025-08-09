#include <iostream>
#include <queue>

using namespace std;
int a, b, n, m;

int res = 0;
bool visited[100001];

int main()
{
    cin >> a >> b >> n >> m;
    int mov[6] = {1, -1, a, -a, b, -b};
    int mov_double[2] = {a, b};
    queue<pair<int, int>> q;
    q.push({n, 0});
    visited[n] = true;

    while (!q.empty())
    {
        int now = q.front().first;
        int now_count = q.front().second;
        int mov[8] = {now + 1, now - 1, now * a, now * b, now - a, now + a, now - b, now + b};
        q.pop();
        if (now == m)
        {
            res = now_count;
            break;
        }

        for (int i = 0; i < 8; i++)
        {
            if (mov[i] >= 0 && mov[i] <= 100000 && !visited[mov[i]])
            {
                visited[mov[i]] = true;
                q.push({mov[i], now_count + 1});
            }
        }
    }
    cout << res << '\n';
    return 0;
}