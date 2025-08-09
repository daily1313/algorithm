#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

string solution(string s) {
    string answer = "";
    map<char,int>m;
    
    for(int i=0;i<s.size();i++)
    {
        ++m[s[i]];
    }
    
    for(int i='a';i<='z';i++)
    {
        if(m[i]==1) {
            answer += i;
        }
    }
    
    
    return answer;
}