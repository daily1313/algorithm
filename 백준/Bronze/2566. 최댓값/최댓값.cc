#include <iostream>

int arr[10][10];

using namespace std;
int res = -1, r, c;
int main()
{
    
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] > res) {
                res = arr[i][j];
                r = i+1;
                c = j+1;
            }
        }
    }
    cout<<res<<'\n';
    cout<<r<<' '<<c<<'\n';
}