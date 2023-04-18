#include <iostream>

using namespace std;

int main()
{
    int n, m;
    int arr[101];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        arr[i] = i;
    }

    for(int i=0;i<m;i++)
    {
        int change_num, changed_num;
        cin>>change_num>>changed_num;
        int temp = arr[change_num];
        arr[change_num] = arr[changed_num];
        arr[changed_num] = temp; 
    }

    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<' ';
    }
    return 0;
}