#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> citations) {
    int answer = -1;
    
    map<int, int> m;
    for(int i=0;i<citations.size();i++)
    {
        for(int j=0;j<=citations[i];j++)
        {
            ++m[j];
        }
    }
    
    
    for(int i=0;i<=10000;i++)
    {
        if(m[i]>=answer && m[i] >= i)
        {
            answer = i;
        }
    }
    
    return answer;
}