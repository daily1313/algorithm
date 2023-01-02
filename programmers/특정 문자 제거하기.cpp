#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    char charArr[letter.size()];
    
    charArr[0] = letter[0];

    
    for(const auto &elem : my_string)
    {
        if(elem == charArr[0]) continue;
        answer += elem;
    }
    
    return answer;
}