#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string number = to_string(order);
    
    for(int i=0;i<number.size();i++)
    {
        if(number[i]=='3' || number[i]=='6' || number[i]=='9') answer++;
    }
    return answer;
}