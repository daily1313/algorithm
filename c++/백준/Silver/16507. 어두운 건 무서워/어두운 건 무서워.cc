#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
int r, c;
int q;
long long square[1001][1001];
long long sum[1001][1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>r>>c>>q;
    int prefix_sum = 0;
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            cin>>sum[i][j];
            sum[i][j] += (sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1]);
        }
    }
    while(q--)
    {
        int r1,c1,r2,c2;
        cin>>r1>>c1>>r2>>c2;
        cout<<(sum[r2][c2] - sum[r1-1][c2] - sum[r2][c1-1] + sum[r1-1][c1-1]) / ((r2-r1+1) * (c2-c1+1))<<'\n'; 
    }
}