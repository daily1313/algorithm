#include <iostream>
using namespace std;
unsigned long long dp[1025][1025];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin>>N>>M;
    int num;
    // dp 초기화(Tabulation)
    dp[0][0] = 0;
    dp[1][0] = 0;
    dp[0][1] = 0;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cin>>num;
            dp[i][j] = num + dp[i][j-1] + dp[i-1][j] - dp[i-1][j-1];  
            // dp에 누적값을 저장하는 로직
        }
    }

    while(M--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1]<<'\n';
    }
    
}