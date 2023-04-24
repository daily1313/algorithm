#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int i = 1;
    int res = 0;
    while(i*i<=n)
    {
        res++; i++;
    }
    cout<<res<<'\n';
    return 0;
}