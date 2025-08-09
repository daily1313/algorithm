#include <iostream>

#define value -1
#define max 100

int dp_m[max];

using namespace std;

int dp_Memorization(int n)
{
    if(dp_m[n] == value)
    {
        if(n<=1) dp_m[n] = n; // dp[1] = 1 ,dp[0] = 0
        else dp_m[n] = dp_Memorization(n-1) + dp_Memorization(n-2);
    }

    return dp_m[n];
}

int dp_Tabulation(int n)
{
    int dp_t[n+1]; // initialize select table
    int i;
    dp_t[0] = 0; dp_t[1] = 1;

    for(i=2; i<=n; i++)
    {
        dp_t[i] = dp_t[i-1] + dp_t[i-2];
    }

    return dp_t[n];
}

void initialize()
{
    for(int i=0;i<max; i++)
    {
        dp_m[i] = value;
    }
}



int main()
{
    initialize();

    cout<<dp_Memorization(0)<<'\n'; // 0
    cout<<dp_Memorization(1)<<'\n'; // 1
    cout<<dp_Memorization(2)<<'\n'; // 1
    cout<<dp_Memorization(3)<<'\n'; // 2
    cout<<dp_Memorization(4)<<'\n'; // 3

    cout<<dp_Tabulation(0)<<'\n'; // 0
    cout<<dp_Tabulation(1)<<'\n'; // 1
    cout<<dp_Tabulation(2)<<'\n'; // 1
    cout<<dp_Tabulation(3)<<'\n'; // 2
    cout<<dp_Tabulation(4)<<'\n'; // 3


}