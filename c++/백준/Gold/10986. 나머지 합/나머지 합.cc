#include <iostream>

using namespace std;
unsigned long long prefix_sum[1001];
unsigned long long nums[1001];
int main()
{
    int n,m;
    cin>>n>>m;
    // prefix_sum[j] - prefix_sum[i] % mod = 0 
    // by transposition
    // prefix_sum[j] % mod = prefix_sum[i] % mod
    unsigned long long sum = 0;
    unsigned long long res = 0;
    for(int i=0;i<n;i++)
    {
        int number;
        cin>>number;
        sum += number;
        if(!(sum % m)) res++;
        prefix_sum[sum % m]++;
    }

    for(int i=0;i<=m;i++)
    {
        res += (prefix_sum[i] * (prefix_sum[i] - 1)) / 2;
    }
    cout<<res<<'\n';
    return 0;
}