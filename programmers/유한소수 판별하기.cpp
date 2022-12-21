#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
    if(a>b)
    {
        if(b==0)return a;
        else return GCD(b,a%b);
    }
    else
    {
        if(a==0) return b;
        else return GCD(a, b%a);
    }
}

int solution(int a, int b) {
    int answer = 1;
    vector<int>v;
    
    if(b/GCD(a,b)==1) return 1;
    
    for(int i=2;i<b/GCD(a,b);i++)
    {
        if((b/GCD(a,b))%i==0)
        {
            v.push_back(i);
        }
    }
    if(v.empty()) 
    {
        v.push_back(b/GCD(a,b));
    }
    
    for(int i=0;i<v.size();i++)
    {
        if(v[i] % 2 != 0 && v[i] % 5 != 0) 
        {
            answer = 2;
            break;
        }  
    }
    
    return answer;
}