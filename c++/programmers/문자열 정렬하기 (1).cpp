#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    for(const auto &elem : my_string)
    {
        if(isdigit(elem))
        {
            answer.push_back(elem-'0');
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}