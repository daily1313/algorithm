#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(const auto &elem : my_string)
    {
        if(elem == 'a' || elem == 'e' || elem == 'i' || elem == 'o' || elem == 'u'){
            continue;
        }
        answer += elem;
    }
    return answer;
}