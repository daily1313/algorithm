#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string number = to_string(num);
    
    for(int i=0;i<number.size();i++)
    {
        if(number[i] - '0' == k)
        {
            return i+1;
        }
    }
    
    return -1;
}