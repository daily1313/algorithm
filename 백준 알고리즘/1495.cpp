#include <cstdio> // 입출력 속도향상을 위해 다음 헤더 이용

int n, s, m;
int a[101];
bool d[101][1001];

// s-> s+v[i], s-v[i] -> s+v[1]+v[2], s+v[1]-v[2], s-v[1]+v[2], s-v[1]-v[2]
// D[i][j] = i번 곡을 볼륨 j로 연주할 수 있으면 1, 없으면 0

int main()
{
    scanf("%d %d %d", &n, &s, &m);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
    d[0][s] = true;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (!d[i][j])
                continue;
            if (j - a[i + 1] >= 0)
                d[i + 1][j - a[i + 1]] = true;
            if (j + a[i + 1] <= m)
                d[i + 1][j + a[i + 1]] = true;
        }
    }
    int ans = -1;
    for (int i = 0; i <= m; i++)
    {
        if (d[n][i])
            ans = i;
    }
    printf("%d\n", ans);
}