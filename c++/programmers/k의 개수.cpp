#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    for(int elem = i; elem<=j; elem++)
    {
        string number = to_string(elem);
        for(int idx = 0;idx<number.size();idx++)
        {
            if(number[idx] - '0' == k) 
            {
                answer++;
            }
        }
    }
    return answer;
}