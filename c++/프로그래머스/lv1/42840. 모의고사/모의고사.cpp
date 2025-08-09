#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int,int> &p1, pair<int,int> &p2)
{
    if(p1.second == p2.second) return p1.first < p2.first;
    return p1.second > p2.second; 
}

vector<int> solution(vector<int> answers) {
    
    vector<int> answer;
    vector<int> one_answer = {1,2,3,4,5};
    vector<pair<int,int>> v;
    
    int one = 0, two = 0, three = 0;
    
    for(int i=0;i<answers.size();i++)
    {
        if(answers[i] ==  one_answer[i%5] ) one++;
    }
    
    for(int i=0;i<answers.size();i++)
    {
        if(i%2==0)
        {
            if(answers[i]==2) two++;
        }
        else if(i%8==1)
        {
            if(answers[i]==1) two++;
        }
        else if(i%8==3)
        {
            if(answers[i]==3) two++;
        }
        else if(i%8==5)
        {
            if(answers[i]==4) two++;
        }
        else if(i%8==7)
        {
            if(answers[i]==5) two++;
        }
    }
    
    for(int i=0;i<answers.size();i++)
    {
        if(i%10==0 || i%10==1)
        {
            if(answers[i]==3) three++;
        }
        else if(i%10==2 || i%10==3)
        {
            if(answers[i]==1) three++;
        }
        else if(i%10==4 || i%10==5)
        {
            if(answers[i]==2) three++;
        }
        else if(i%10==6 || i%10==7)
        {
            if(answers[i]==4) three++;
        }
        else if(i%10==8 || i%10==9)
        {
            if(answers[i]==5) three++;
        }
    }
    v.push_back(make_pair(1,one));
    v.push_back(make_pair(2,two));
    v.push_back(make_pair(3,three));
    
    sort(v.begin(),v.end(),cmp);
    
    
    if(v[1].second!=v[0].second) 
    {
        answer.push_back(v[0].first);
        return answer;
    }
    else
    {
        answer.push_back(v[0].first);
        answer.push_back(v[1].first);
        if(v[1].second == v[2].second)
        {
            answer.push_back(v[2].first);
        }
    }
    
    return answer;
    
}