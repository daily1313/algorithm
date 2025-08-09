#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n) {
    int answer = 0;
    int min = 1000000000;
    vector<int>v;
    int count = 1;
    int factorial = 10;
    while(factorial--)
    {
        int number = 1;
        for(int i=1;i<=count;i++)
        {
            number *= i;
        }
        v.push_back(number); 
        count++;
    }
    
    int index = 1; 
    for(const auto &elem : v) 
    {
        if(n - elem < min && n - elem >= 0)
        {
            min = n - elem;
            answer = index;
        }
        index++;
    }
    
    return answer;
}