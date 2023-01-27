#include <iostream>

using namespace std;
// D[i][j] = i번째 물건 고려, 배낭에 넣은 물건 무게의 합이 j일 때, 가치의 최댓값
// 점화식 물건을 넣은 경우, D[i-1][j-w[i]] + v[i];
// j-w[i]>=0 -> d[i][j] = max(d[i][j], d[i-1][j-w[i]]+v[i]);
// 물건을 넣지 않은 경우, 변화 x : D[i-1][j]

int main()
{
    int d[101][100001];
    int v[101];
    int w[100001];
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    d[0][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            d[i][j] = d[i - 1][j];
            if (j - w[i] >= 0)
            {
                d[i][j] = max(d[i][j], d[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    cout << d[n][k] << '\n';
}