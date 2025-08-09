#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for(const auto &elem : rsp)
    {
        if(elem == '2') answer += '0';
        if(elem == '0') answer += '5';
        if(elem == '5') answer += '2';
    }
    return answer;
}