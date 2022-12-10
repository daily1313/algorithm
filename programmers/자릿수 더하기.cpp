#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    string number = to_string(n);
    for(int i=0;i<number.size();i++)
    {
        answer += (number[i] - '0');
    }
    return answer;
}