#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    
    sort(numbers.begin(),numbers.end(),greater<int>());
    
    return numbers[0] * numbers[1];
}