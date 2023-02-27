#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int a[100001];
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);

    int res = 2100000000;


    int r = 1, l = 0;
    while(r<n && l<=r)
    {
        if(a[r]-a[l] < m) 
        {
            r++;
        }
        else if(a[r]-a[l] == m)
        {
            res = m;
            break;
        }
        else 
        {
            res = min(res, a[r] - a[l]);
            if(r==l) r++;
            else l++;
        }
    }
       

    cout<<res;

    return 0;

}