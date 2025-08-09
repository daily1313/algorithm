#include <iostream>
#include <algorithm>
#include <queue>
int n, m;
int a[1000][1000];        // n*m 배열
int group[1000][1000];    // 그룹이 각각 어디에 속하는지 1, 0
int group_size[10000000]; // 그룹의 크기
int groupn = 0;           // 그룹의 개수
using namespace std;

int mov[4][2] = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};

void bfs(int x, int y)
{
    groupn += 1;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    group[x][y] = groupn;
    int cnt = 1;
    while (!q.empty())
    {
        int r, c;
        tie(r, c) = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int rx = r + mov[i][0];
            int cy = c + mov[i][1];

            if (0 <= rx && rx < n && cy >= 0 && cy < m)
            {
                if (group[rx][cy] == 0 && a[rx][cy] == 1)
                {
                    group[rx][cy] = groupn;
                    q.push(make_pair(rx, cy));
                    cnt += 1;
                }
            }
        }
    }
    group_size[groupn] = cnt;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 1 && group[i][j] == 0)
            {
                bfs(i, j);
            }
        }
    }
    // 그룹에 속해있지 않고, 배열값이 1인 경우 bfs 탐색

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                vector<int> near; // 0 -> 1로 바꿔주는 로직
                for (int k = 0; k < 4; k++)
                {
                    int nx = i + mov[k][0];
                    int ny = j + mov[k][1];

                    if (0 <= nx && nx < n && 0 <= ny && ny < m)
                    {
                        if (a[nx][ny] == 1)
                        {
                            near.push_back(group[nx][ny]);
                        }
                    }
                }
                sort(near.begin(), near.end());
                near.erase(unique(near.begin(), near.end()), near.end());
                // 중복 제거
                int sum = 1; // 0 -> 1로 바꾼 칸
                for (int neighbor : near)
                {
                    sum += group_size[neighbor];
                }
                if (ans < sum)
                    ans = sum;
            }
        }
    }
    cout << ans << '\n';
}