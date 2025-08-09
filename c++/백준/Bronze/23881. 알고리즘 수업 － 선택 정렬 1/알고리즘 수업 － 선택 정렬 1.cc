#include <iostream>

using namespace std;
int A[10001];
int n, k;
void selection_sort(int arr[]) 
{
    int cnt = 0;

    for(int last=n-1;last>=1;last--)
    {
        int maxi = arr[0];
        
        int i=0;
        for(int j=0;j<=last;j++) 
        {
            if(maxi < arr[j])
            { 
                maxi = arr[j];
                i = j;
            }
        }
        if(i != last) 
        {
            int tmp = arr[last];
            arr[last] = arr[i];
            arr[i] = tmp;
            cnt++;
            if(cnt == k) 
            {
                cout<<arr[i]<<' '<<arr[last]<<'\n';
                return;
            }
        }
    }
    if(cnt < k)
    {
        cout<<-1<<'\n';
        return;
    }
}
int main()
{
    cin>>n>>k;

    for(int m=0;m<n;m++)
    {
        cin>>A[m];
    }

    selection_sort(A);

    return 0;
}