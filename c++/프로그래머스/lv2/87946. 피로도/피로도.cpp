#include <string>
#include <vector>

using namespace std;
bool check[9];
int answer = -1;
void dfs(int k, int cnt, vector<vector<int>> dungeons){
    for(int i=0;i<dungeons.size();i++){
    	if(!check[i]&&k >= dungeons[i][0]){ 
            check[i] = true;
            dfs(k-dungeons[i][1], cnt+1, dungeons);
            check[i] = false;
        }
    }
    answer = max(answer, cnt);
}
int solution(int k, vector<vector<int>> dungeons) {
    dfs(k, 0, dungeons);  
    return answer;
}
