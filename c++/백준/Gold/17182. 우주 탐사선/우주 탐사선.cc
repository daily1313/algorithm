#include <iostream>

using namespace std;

int n, k;
int dist[11][11];
bool visited[11];
int res = 2e9;

void dfs(int idx, int cost, int cnt)
{
    if (cnt == n)
    {
        res = min(res, cost);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            visited[i] = true;
            dfs(i, cost + dist[idx][i], cnt + 1);
            visited[i] = false;
        }
    }
}
void floydwarshall()
{
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (dist[i][j] > dist[i][k] + dist[k][j])
                {
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
}

void input()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> dist[i][j];
        }
    }
}

void optimizeInputAndOutput()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int getResult()
{
    visited[k] = true;
    dfs(k, 0, 1);
    return res;
}

int main()
{
    optimizeInputAndOutput();
    input();
    floydwarshall();
    cout << getResult() << '\n';
}