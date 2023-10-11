#include <iostream>

using namespace std;

int res = -1;
int cnt;
int from, to, n, m, r, l;
int dist[101][101];
int item[101];

void floydWarshall()
{
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
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
    cin >> n >> m >> r;

    for (int i = 1; i <= n; i++)
    {
        cin >> item[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j) dist[i][j] = 1e9;
        }
    }

    for (int i = 0; i < r; i++)
    {
        cin >> from >> to >> l;
        dist[from][to] = l;
        dist[to][from] = l;
    }
}

int getResult()
{
    for (int i = 1; i <= n; i++)
    {
        cnt = 0;
        for (int j = 1; j <= n; j++)
        {
            if (dist[i][j] <= m)
            {
                cnt += item[j];
            }
        }
        if (res < cnt) res = cnt;
    }
    return res;
}

void optimizeInputAndOutput() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    optimizeInputAndOutput();
    input();
    floydWarshall();
    cout << getResult() << '\n';
}