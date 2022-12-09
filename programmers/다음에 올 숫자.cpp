#include <string>
#include <vector>

using namespace std;
bool check; 
int solution(vector<int> common) {
    
    for(int i=1;i<common.size()-1;i++)
    {
        if(common[i]-common[i-1] == common[i+1]-common[i]) 
        {
            check = true;
        }
        else
        {
            check = false;
        }
    }
    
    if(check) 
    {
        return common[common.size()-1] + (common[1] - common[0]);
    }
    
    return common[common.size()-1] * (common[1] / common[0]);
}