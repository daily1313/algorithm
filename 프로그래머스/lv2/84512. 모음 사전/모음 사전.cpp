#include <bits/stdc++.h>

using namespace std;
vector<string> words;
vector<char> alpha = { 'A', 'E', 'I','O','U'};
void dfs(string word, int length)
{
    if(length == word.size())
    {
        words.push_back(word);
        return;
    }
    
    for(int i=0;i<alpha.size(); i++)
    {
        dfs(word + alpha[i], length);
    }
        
}

int solution(string word) {
    int answer = 0;
    for(int i=1;i<=5;i++)
    {
        string str = "";
        dfs(str,i);
    }
    sort(words.begin(),words.end());
    
    for(int i=0;i<words.size();i++)
    {
        if(word==words[i])
        {
            answer = i + 1;
        }
    }

    return answer;
}