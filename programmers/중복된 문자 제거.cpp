#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(const auto& elem : my_string)
    {
        if(answer.find(elem) != string::npos) 
        {
            continue;
        }
        answer += elem;
    }
    return answer;
}