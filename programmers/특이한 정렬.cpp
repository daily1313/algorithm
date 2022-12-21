#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int,int> &p1, pair<int, int> &p2)
{
    if(p1.first == p2.first) 
    {
        return p1.second > p2.second;
    }
    return p1.first < p2.first;
}

vector<int> solution(vector<int> numlist, int n) {
    
    vector<int> answer;
    vector<pair<int,int>> v;
    
    for(const auto &elem : numlist)
    {
        v.push_back(make_pair(abs(elem - n), elem));
    }
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<v.size();i++)
    {
        answer.push_back(v[i].second);
    }
    return answer;
}