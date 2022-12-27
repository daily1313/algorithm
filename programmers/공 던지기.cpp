#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    
    
    int cur = 0;
    while(k>1)
    {
        k--;
        cur += 2;
        cur %= numbers.size();
    }
    return numbers[cur];
     
    
}