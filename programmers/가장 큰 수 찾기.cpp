#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int maxIndex = -1;
    int max = array[0];
    for(int i=1;i<array.size();i++)
    {
        if(array[i]>max) {
            max = array[i];
            maxIndex = i;
        }
    }
    answer.push_back(max);
    answer.push_back(maxIndex);
    return answer;
}