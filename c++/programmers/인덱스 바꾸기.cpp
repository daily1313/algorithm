#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {

    
    string n1_to_n2_answer = "";
    string n2_to_n1_answer = "";
    n1_to_n2_answer += my_string[num2];
    n2_to_n1_answer += my_string[num1];
    
    my_string.replace(num1, 1, n1_to_n2_answer);
    
    my_string.replace(num2, 1, n2_to_n1_answer);
    
    
    return my_string;
}