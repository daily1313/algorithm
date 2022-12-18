#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string number = "";
    for(const auto &elem : my_string)
    {
        if(isdigit(elem)) 
        {
            number += elem;  
        } 
        else if(!isdigit(elem) && number != "")
        {
            answer += stoi(number);
            number = "";
        }         
    }
    if(number!="")
    {
        answer += stoi(number);
    }
    return answer;
}