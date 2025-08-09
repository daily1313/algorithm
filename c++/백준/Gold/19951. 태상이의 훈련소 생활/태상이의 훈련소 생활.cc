#include <iostream>

using namespace std;
int ground[100001];
int work[100001];
int n, m, h;
int a, b, k;
int sum = 0;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) 
    {
        cin>>ground[i];
    }
 
    while(m--)
    {
        cin>>a>>b>>h;
        work[a] += h;
        work[b+1] -= h;
    }

    // 1  2  3  4  5 -1 -2 -3 -4 -5
    //-3  0  0  0  0  3  0  0  0  0
    // 0  0  0  0  0  8  0  0  0  0
    // 0  2  0  0  0  0  0 -2  0  0
    //-3 -1 -1 -1 -1  7  7  5  5  5

    for(int i=1;i<=n;i++) 
    {
        sum += work[i];
        ground[i] += sum;
        cout<<ground[i]<<' ';
    }
    return 0;
}