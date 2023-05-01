#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[15001];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int l = 0;
    int r = n-1;
    int res = 0;
    sort(arr, arr+n);

    while(l<r)
    {
        int sum = arr[l] + arr[r];
        if(sum == m) 
        {
            res++;
            l++;
            r--;
        }
        else if(sum < m)
        {
            l++;
        }
        else if(sum > m)
        {
            r--;
        }
    }
    cout<<res<<'\n';
}