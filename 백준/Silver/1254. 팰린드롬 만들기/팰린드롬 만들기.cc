#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int n;
string str;
bool check(int idx) 
{
    int size = (n - idx) / 2;
    for(int i=0;i<size;i++)
    {
        if(str[idx+i]!=str[n-1-i]) return false;
    }
    return true;

}

int main()
{
    
    int cnt=0;
    cin>>str;
    n = str.size();
    for(int i=0;i<n;i++)
    {
        if(check(i))
        {
            cnt = n + i;
            cout<< cnt;
            return 0;
        }
    }
    
    return 0;

}