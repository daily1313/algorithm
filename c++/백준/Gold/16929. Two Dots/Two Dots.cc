#include <iostream>

using namespace std;
//사이클의 시작 : 가능한 모든 점(NM)
//DFS : O(NM), O(50*50), O(2500^2)(최악 경우)
// cnt : 방문한 칸의 개수, col : 색 (시작점의 색)
// 크기가 4 이상인 사이클 찾으면 true, 아니면 false
// 이 문제에서 사이클이란 4칸 연속 이동할 수 있는지에 대한 사이클이다.
// 이전 칸과 다른 칸으로 연속해서 이동했을 때, 이미 방문한 칸을 방문했으면 사이클 졵대
int mov[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m,start_r,start_c;
bool check[51][51];
char board[51][51];
void dfs(int r, int c, int path){
    if(r == start_r && c == start_c && path >= 4) {
        cout << "Yes"; 
        exit(0);
        return;
    }

    if(check[r][c]) return;
    check[r][c] = 1;

    for(int i = 0; i < 4; i++){
        int nr = r + mov[i][0];
        int nc = c + mov[i][1];
        if(board[nr][nc] != board[start_r][start_c]) continue;
        if(0 > nr || nr >= n || 0 > nc || nc >= m) continue;
        dfs(nr,nc,path+1);
    }

    check[r][c] = 0;
}

int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> board[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(check[i][j]) continue;
            start_r= i, start_c = j;
            dfs(i,j,0);
        }
    }

    cout << "No";
}