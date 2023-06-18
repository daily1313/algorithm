#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int weight = 0, book;
    int res = 0;
    cin>>n>>m;
    while(n--)
    {
        cin>>book;
        if(weight + book > m)
        {
            weight = book;
            res++;
        }
        else
        {
            weight += book;
        }
    }
    if(weight > 0)
    {
        res++;
    }
    cout<<res<<'\n';
}