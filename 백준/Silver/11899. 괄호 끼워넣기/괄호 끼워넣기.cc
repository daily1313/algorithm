#include <iostream>
#include <stack>

using namespace std;
stack<char>s;
int main()
{
    string str;
    cin>>str;
    
    int count = 0;
    
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='(')
        {
            s.push('(');
        }
        else if(str[i]==')')
        {
            
            if(!s.empty())
            {
                s.pop();
            }
            else 
            {
                count++;
            }
        }
    }

    
    cout<<count+s.size()<<'\n';
}