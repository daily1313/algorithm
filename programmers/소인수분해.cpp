#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool checkPrimeNumber(int number)
{
    if(number == 2) return true;
    for(int i=2;i<number;i++) 
    {
        if(number % i == 0) return false;
    }
    return true;
}

vector<int> solution(int n) {
        vector<int> answer;
        for(int i=2;i<=n;i++)
        {
            if(n%i==0 && checkPrimeNumber(i))
            {
                answer.push_back(i);
            }
        }
    answer.erase(unique(answer.begin(),answer.end()),answer.end());
    // 중복 원소 제거 
    return answer;
}