#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(const auto &elem : my_string)
    {
        if(isdigit(elem)) 
        {
            answer += (elem - '0');
        }
    }
    return answer;
}