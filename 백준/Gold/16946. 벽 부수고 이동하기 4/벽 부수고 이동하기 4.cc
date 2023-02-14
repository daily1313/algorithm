#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <set>
#include <tuple>
// 이동할 수 있는 빈 칸을 모두 그룹 짓고, 몇 개의 칸을 이루어져 있는지 계산
// 그룹의 크기를 모두 구하고, 각각의 벽을 빈칸으로 바꿨을 때, 최대 4개의 인접한 칸만 검사하면 됨.
// O(NM)
using namespace std;
int a[1001][1001];      // 입력
bool check[1001][1001]; // DFS 검사
int group[1001][1001];  // group[i][j], i,j의 그룹 번호
vector<int> group_size; // 해당 그룹의 개수

int mov[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

void bfs(int x, int y)
{
    int g = group_size.size();
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    check[x][y] = true;
    group[x][y] = g;
    int cnt = 1; // 자기자신 포함이기 때문에 cnt 1에서 시작

    while (!q.empty())
    {
        int r, c;
        r = q.front().first;
        c = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int nr = r + mov[i][0];
            int nc = c + mov[i][1];
            if (nr >= 0 && nr < n && nc >= 0 && nc < m)
            {
                if (a[nr][nc] == 0 && !check[nr][nc])
                {
                    q.push(make_pair(nr, nc));
                    check[nr][nc] = true;
                    group[nr][nc] = g;
                    cnt += 1;
                }
            }
        }
    }
    group_size.push_back(cnt);
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        for (int j = 0; j < m; j++)
        {
            a[i][j] = input[j] - '0';
            check[i][j] = false;
            group[i][j] = -1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0 && !check[i][j])
            {
                bfs(i, j);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 0)
            {
                cout << 0;
            }
            else
            {
                set<int> near;
                // 그룹 중복 방지하기 위해 set을 이용
                for (int k = 0; k < 4; k++)
                {
                    int x = i + mov[k][0];
                    int y = j + mov[k][1];
                    if (0 <= x && x < n && 0 <= y && y < m)
                    {
                        if (a[x][y] == 0)
                            near.insert(group[x][y]);
                    }
                }
                int ans = 1;
                for (int g : near)
                {
                    ans += group_size[g];
                }
                cout << ans % 10;
            }
        }
        cout << '\n';
    }

    return 0;
}