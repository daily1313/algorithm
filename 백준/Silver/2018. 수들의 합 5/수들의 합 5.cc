#include <iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int l = 1;
    int r = 1;
    int sum = 1;
    int res = 0;
    while(l <= r && r <= n)
    {
        if(sum == n)
        {
            res++;
            sum -= (l++);
        }
        else if(sum > n)
        {
            sum -= (l++);
        }
        else if(sum < n)
        {
            sum += (++r);
        }
    }
    cout<<res<<'\n';

}