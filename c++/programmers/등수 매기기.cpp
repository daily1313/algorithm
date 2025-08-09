#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> sum;
    
    for(int i=0;i<score.size();i++)
    {
        sum.push_back(score[i][0] + score[i][1]);
    }
    
    
    
    for(int i=0;i<sum.size();i++)
    {
        int number = 1;
        for(int j=0;j<sum.size();j++) 
        {
            if(i==j) continue;
            else if(sum[i]<sum[j]) number++;
            else continue;
        }
        answer.push_back(number);
    }
    
    
    
    return answer;
}