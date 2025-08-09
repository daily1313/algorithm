#include <iostream>
#include <algorithm>

using namespace std;
int n,k;
int getBottle(int num)
{
    int cnt = 0;
    while(num)
    {
        if(num%2==1)
        { 
            cnt++;
        }
        num/=2;
    }
    return cnt;
}

int main()
{
    
    cin>>n>>k;
    int ans = 0; 
    while(1)
    {
        if(getBottle(n)<=k) break;
        else
        {
            n++;
            ans++;
        }
        
    }
    cout<<ans<<'\n';

    return 0;    
}