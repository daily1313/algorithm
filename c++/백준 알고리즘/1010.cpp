#include <iostream>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>r>>n;
        unsigned long long res = 1;
        for(int i=1;i<=r;i++)
        {
            res = res * (n-i+1) / i;
        }
        cout<<res<<'\n';
    }
    return 0;
}