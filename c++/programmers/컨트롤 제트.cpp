#include <string>
#include <vector>
#include <sstream>
#include <regex>
using namespace std;
smatch match;
bool is_digit(string str) 
{
    return atoi(str.c_str()) != 0 || str.compare("0") == 0;
}
// atoi를 사용하여 *char형 반환, 해당되는 문자열이 숫자면 숫자를 반환한다. 만약 숫자가 아니면 0을 반환, 그런데 문자열이 0이면 이를 구분할 수 없으므로, compare함수를 이용해 str이 숫자가 0인 경우와, 숫자가 0이 아닌 경우를 구분 
int solution(string s) {
    vector<int>answer;
    int result = 0;
    stringstream ss(s);
    string elem;
    while(ss >> elem)
    {
         if(is_digit(elem)) 
         {
             answer.push_back(stoi(elem));
         }
         else if(elem == "Z") 
         {
             answer.pop_back();
         }
        
        
    }
    
    for(const auto &num : answer)
    {
        result += num;
    }
        
    return result;
}