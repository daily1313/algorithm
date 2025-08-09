#include <iostream>
#include <cstring>
using namespace std;
long long d[101][101][101];
long long go(int n,int m,int k) 
{
    if(k==0) { 
        return 1;
    }
    if(n<=0 || m<=0 || k<0) {
        return 0;
    }
    if(d[n][m][k] != -1) {
        return d[n][m][k];
    }
    d[n][m][k] = go(n-1,m,k) + go(n-1,m-1,k-1) * m +
    go(n-1,m-2,k-2) * m * (m-1) / 2 + go(n-2,m-1,k-2) * m * (n-1);
    // N번행에 룩을 놓지 않는 경우, N번행에 룩을 놓았고 다른 룩에게 공격받지 않는 경우,
    // N번행에 룩을 두개 놓는 경우, N번행에 룩을 하나 놓았고, 다른 룩에게 공격받는 경우
    d[n][m][k] %= 1000001;
    return d[n][m][k];
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    memset(d,-1,sizeof(d));
    cout<<go(n,m,k);
}