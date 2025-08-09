#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int friends[1001] = {0};
    for(int i=0;i<m;i++)
    {
        int A, B;
        cin>>A>>B;
        friends[A]++;
        friends[B]++;
    }

    for(int i=1;i<=n;i++)
    {
        cout<<friends[i]<<'\n';
    }


   
}