#include <iostream>


int n, k;
using namespace std;
// n = 3, k = 7
// 1 2 3 -> 3
// 2 4 6 -> 3
// 3 6 9 -> 2



int main()
{

    cin>>n>>k;
    int l=1,r=k;
    int res=0;
    while(l<=r)
    {
        int m = (l+r)/2;
        int cnt=0;
        // i행에서 m보다 작거나 같은 수의 개수는 i*j<=m을 만족하는 j의 개수를 구하는 것과 동일
        // 행의 범위는 n까지이므로 min값을 n으로 제한하기 위해 해당 식 min(n, m/i)를 적용
        
        for(int i=1;i<=n;i++)
        {
            cnt += min(n, m/i);
            // 해당 행에서 m보다 작은 수의 개수 구하기 
        }
        if(cnt>=k)
        {
            res=m;
            r=m-1;
        }
        else
        {
            l=m+1;
        }
    }
    cout<<res<<'\n';
}
