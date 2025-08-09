#include <iostream>
#include <queue>
#include <tuple>
#include <cstring>
using namespace std;
int mov[12][2] = {{0,1},{0,-1},{1,0},{-1,0},{-2,1},{-2,-1},{2,1},{2,-1},{1,-2},{1,2},{-1,2},{-1,-2}};
// 원숭이의 이동 방법 (앞에 네 개 인접, 뒤에 여덟개 나이트)
int cost[] = {0,0,0,0,1,1,1,1,1,1,1,1};
int a[200][200]; // 지도
int d[200][200][31]; // 3차원 a,b에 도착 t => 나이트처럼 이동
int main()
{
    int l;
    cin>>l; // 나이트처럼 이동 가능한 횟수
    int n, m;
    cin>> m>> n;

    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>> a[i][j];
        }
    }
    memset(d, -1, sizeof(d));
    queue<tuple<int,int,int>> q;
    d[0][0][0] = 0; // 0,0에서 시작 나이트처럼 이동한 횟수 0
    q.push(make_tuple(0,0,0));

    while(!q.empty()) {
        int x, y, c;
        tie(x,y,c) = q.front();
        q.pop();
        for(int k=0;k<12;k++) {
            int nx = x + mov[k][0];
            int ny = y + mov[k][1];
            int nc = c + cost[k];
            if(nx>=0 && nx<n && ny>=0 && ny<m) {
                if(a[nx][ny] == 1) continue;
                if(nc<=l) {
                    if(d[nx][ny][nc] == -1) {
                        d[nx][ny][nc] = d[x][y][c] + 1;
                        q.push(make_tuple(nx,ny,nc));
                    }
                }
                // 나이트 이동 횟수 제한에 따라서 이동할 수 있는지 처리
            }
        }
    }
    int ans = -1;
    for(int i=0;i<=l;i++) {
        if(d[n-1][m-1][i] == -1) continue;
        if(ans == -1 || ans > d[n-1][m-1][i]) {
            ans = d[n-1][m-1][i];
        }
        // 나이트의 이동 횟수가 l이하이기 때문에 굳이 l번 이동하지 않아도 됨.
    }
    cout<<ans;
}