#include <bits/stdc++.h>

using namespace std;
int answer = 0;
bool check[201];
void dfs(int now, int n, vector<vector<int>> computers)
{
    stack<int> s;
	s.push(now);
	
	while(!s.empty()){
		int cur = s.top();
		s.pop();
		if(check[cur]) continue;
		check[cur]=true;
        for(int next=0;next<n;++next)
		{
			if(!check[next] && computers[cur][next]){
				s.push(next);
			}
		}
	}
    
}

int solution(int n, vector<vector<int>> computers) {
    
    for(int i=0; i<n; i++) {
        if(!check[i]) {
            dfs(i, n, computers);
            answer++;
        }
    }
        
    return answer;
}