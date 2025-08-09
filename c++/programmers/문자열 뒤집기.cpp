#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    reverse(my_string.begin(),my_string.end());
    
    string answer = "";
    answer += my_string;
    return answer;
}