#include <iostream>
#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    cout<<fixed;
    cout.precision(1);
    for(const auto &elem : numbers)
    {
        answer += elem;
    }    
    answer /= numbers.size();
    return answer;
}