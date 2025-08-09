#include <iostream>

using namespace std;
int matrix1[101][101];
int matrix2[101][101];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix1[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix2[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix1[i][j]+matrix2[i][j]<<' ';
        }
        cout<<'\n';
    }


}