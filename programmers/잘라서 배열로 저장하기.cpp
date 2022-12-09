#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    string temp = "";
    
    for(int i=0;i<my_str.size();i++)
    {
        temp += my_str[i];
        if(temp.size()==n)
        {   
            answer.push_back(temp);
            temp = "";
        }
    }
    if(my_str.size()%n)
    {
        answer.push_back(temp);
    }
    
    return answer;
}