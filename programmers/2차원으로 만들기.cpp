#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    
    vector<int>v;
    
    int cnt = 0;
    
    for(const auto &elem : num_list)
    {
        v.push_back(elem);
        cnt++;
        if(cnt == n)
        {
            answer.push_back(v);            
            v.clear();
            cnt = 0;
        }
    }
    return answer;
}