#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,x,y;

    cin>>a>>b>>c>>x>>y;

    int ans = 2100000000; 
    for(int i=0;i<=200000;i++)
    {
        ans = min(ans, (2*i*c + max(x-i,0)*a + max(y-i,0)*b));
    } 
    cout<<ans<<'\n';
}