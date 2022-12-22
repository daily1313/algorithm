#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    sort(spell.begin(),spell.end());
    string str= "";
    for(const auto elem : spell) 
    {
        str += elem;
    }
    
    for(int i=0;i<dic.size();i++) 
    {
        sort(dic[i].begin(),dic[i].end());
        
        if(dic[i]==str) return 1;
    }
    return 2;
}