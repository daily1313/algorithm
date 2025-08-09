#include <bits/stdc++.h>
#include <utility>

using namespace std;

bool cmp2(pair<string, int> &p3, pair<string, int> &p4)
{
    return p3.second > p4.second;
}

bool cmp(pair<int, int> &p1, pair<int ,int> &p2) 
{
    if(p1.first == p2.first) return p1.second < p2.second;
    // 점수가 같은 경우 plays 넘버 기준으로 오름차순 정렬
    else return p1.first > p2.first;
    // 그렇지 않으면 점수 기준 내림차순 정렬
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    map<string,int> m;
    for(int i=0;i<genres.size();i++)
    {
        m[genres[i]] += plays[i];
    }
    // 노래 제목 key, 재생 수 value, value기준으로 내림차순 정렬
    
    vector<pair<string ,int>> v(m.begin(),m.end());
    sort(v.begin(),v.end(),cmp2);
    
    for(int i=0;i<v.size();i++)
    {
        vector<pair<int,int>> g;
        for(int j=0;j<plays.size();j++) 
        {
            if(v[i].first == genres[j])
            {
                g.push_back(make_pair(plays[j], j));
            }
        }
        sort(g.begin(),g.end(),cmp);
        
        answer.push_back(g[0].second);
        if(g.size()>=2) answer.push_back(g[1].second);
        
    }
    
    return answer;
}