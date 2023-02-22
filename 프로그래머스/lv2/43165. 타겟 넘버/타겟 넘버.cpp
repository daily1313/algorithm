#include <string>
#include <vector>


using namespace std;
int answer = 0;
void dfs(vector<int>v, int target, int idx, int sum)
{
    if(idx == v.size())
    {
        if(sum==target)
        {
            answer++;
        }  
        return;
    }
    dfs(v, target, idx+1, sum + v[idx]);
    dfs(v, target, idx+1, sum - v[idx]);
}

int solution(vector<int> numbers, int target) {
    
    
    dfs(numbers, target, 0, 0);
    
    return answer;
}