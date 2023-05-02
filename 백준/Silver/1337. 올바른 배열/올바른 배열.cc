#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[51];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int res = 1;
    int l = 0;
    int r = 1;
    while(l<r && r<n)
    {
        if(arr[r] - arr[l] <= 4 && arr[r] - arr[l] >= 0)
        {
            res++;
            r++;
        }
        else
        {
            l++;
            r++;
            res = max(res, 0);
        }
    }

    int ans = res >= 5 ? 0 : 5 - res;
    cout<<ans<<'\n'; 
}