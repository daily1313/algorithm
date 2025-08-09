#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    int res = 1;
    cin>>n>>m;
    if(n==1) res = 1;
    else if(n==2) 
    {
        res = min(4, (m+1)/2);
    }
    else
    {
        if(m<=6)
        {
            res = min(4, m);
        }
        else
        {
            res = m-2;
        }
    }
    
    cout<<res<<'\n';
}