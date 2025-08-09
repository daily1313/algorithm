#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[101];
    
    for(int i=1;i<=n;i++)
    {
        arr[i] = 0;
    }

    for(int i=0;i<m;i++)
    {
        int first, end, k;
        cin>>first>>end>>k;
        for(int j=first;j<=end;j++)
        {
            arr[j] = k;
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<' ';
    }
    
    return 0;
}