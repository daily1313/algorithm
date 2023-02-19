#include <iostream>

using namespace std;
int GCD(int a, int b)
{
    if(b==0) return a;
    else return GCD(b, a%b);
}
int main()
{
    int n,m;
    cin>>n>>m;
    if(n>m) cout<<m-GCD(n,m)<<'\n';
    else cout<<m-GCD(m,n)<<'\n';
}