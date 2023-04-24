#include <iostream>

using namespace std;
int temporature[101];
int sum[101];
int main()
{
    int n, k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>temporature[i];
        sum[i] = sum[i-1] + temporature[i]; 
    }

    int res = -101;

    for(int i=0;i<=n-k;i++)
    {
        res = max(sum[i+k] - sum[i], res);
    }

    cout<<res<<'\n';
}