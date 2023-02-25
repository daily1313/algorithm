#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    
    vector<int> answer;
    int carpet = brown + yellow;
    
     for(int i=carpet/2; i>0; i--)
    {
        if(carpet % i ==0)
        {
            int weight = i;
            int height = carpet/i;
            
            if((weight-2) * (height-2) == yellow)
            {
                answer.push_back(weight);
                answer.push_back(height);
                break;
            }       
        }
    }
    return answer;
}