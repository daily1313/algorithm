#include <bits/stdc++.h>

using namespace std;
int answer = 51;
bool visited[51];
void dfs(string begin, string target, vector<string> words, int idx)
{
    if(target == begin)
    {
        if(idx < answer) answer = idx;
        return;
    }
    
    for(int i=0;i<words.size();i++)
    {
        int cnt = 0;
        for(int j=0;j<words[i].size();j++)
        {
            if(begin[j] != words[i][j]) cnt++;
        }
        if(cnt == 1 && !visited[i])  
        {
            visited[i] = true;
            dfs(words[i], target, words, idx+1);
            visited[i] = false;
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    dfs(begin, target, words, 0);
    
    return answer == 51 ? 0 : answer;
}