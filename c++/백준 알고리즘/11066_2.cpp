#include <iostream>
#include <cstring>
int a[501];
int d[501][501];
// D[i][j] = i번 파일부터 j번 파일까지 합치는 최소 비용
// i <= k < j
// D[i][k] + D[k+1] + 파일 합치는 비용
using namespace std;

int go(int i, int j)
{
    if (i == j)
        return 0;
    if (d[i][j] != -1)
        return d[i][j];
    int sum = 0;
    int &ans = d[i][j];
    for (int k = i; k <= j; k++)
    {
        sum += a[k];
    }
    for (int k = i; k < j; k++)
    {
        int temp = go(i, k) + go(k + 1, j) + sum;
        if (ans == -1 || ans > temp)
        {
            ans = temp;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(d, -1, sizeof(d));
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        cout << go(1, n) << '\n';
    }
}