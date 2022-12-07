#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int sum = 0;
vector<int> solution(int num, int total) {
        
    vector<int> answer;
    
    if(num%2) 
    {
        int medium = total/num;
        answer.push_back(medium);        
        for(int i=0;i<num/2;i++)
        {
            answer.push_back(medium+(i+1));
            answer.push_back(medium-(i+1));
        }
    }
    else
    {
            int leftmedium = total/num;
            int rightmedium = total/num+1;
            answer.push_back(leftmedium);  
            answer.push_back(rightmedium);  
            for(int i=0;i<num/2-1;i++)
            {
                answer.push_back(leftmedium-(i+1));
                answer.push_back(rightmedium+(i+1));
            }
        
    }
    
    sort(answer.begin(),answer.end());
    
    
    return answer;
}