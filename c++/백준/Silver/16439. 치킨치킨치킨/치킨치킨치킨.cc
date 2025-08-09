#include <iostream>
#include <cstring>

using namespace std;
int preference[31][31];
int res = -1;
int n, m;

void bruteforce(int idx, int cnt, int arr[])
{
    int temp[31];

    for(int i=0;i<n;i++)
    {
        temp[i] = max(arr[i],preference[i][idx]);
    }

    if(cnt == 3)
    {
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            sum += temp[i];
        }
        res = max(res, sum);
        return;
    }

    for(int i = idx+1; i < m; i++)
    {
        bruteforce(i, cnt + 1, temp);
    }
    return;
}
int main()
{
    int arr[40];
 
	memset(arr, 0, sizeof(arr));

    cin>>n>>m;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) {
            cin>>preference[i][j];
        }
    }

    for(int i = 0; i < m; i++)
    {
        bruteforce(i, 1, arr);
    }

    cout<<res<<'\n';
    return 0;
}