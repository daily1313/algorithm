#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string parsing_age = to_string(age);
    
    for(const auto &elem : parsing_age)
    {
        if(elem == '0') answer += 'a';
        else if(elem == '1') answer += 'b';
        else if(elem == '2') answer += 'c';
        else if(elem == '3') answer += 'd';
        else if(elem == '4') answer += 'e';
        else if(elem == '5') answer += 'f';
        else if(elem == '6') answer += 'g';
        else if(elem == '7') answer += 'h';
        else if(elem == '8') answer += 'i';
        else if(elem == '9') answer += 'j';
    }
    return answer;
}