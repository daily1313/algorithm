#include <iostream>
#include <algorithm>
using namespace std;
int n, m;
string board;
char square[51][51];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>board;
        for(int j=0;j<m;j++)
        {
            square[i][j] = board[j];
        }
    }

    int cnt = min(n, m);
    int length = 1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            for(int k=1; k<cnt; k++)
            {
                if(i+k<n && j+k<m)
                {
                    char standard = square[i][j];
                    if(square[i][j+k] == standard && square[i+k][j] == standard && square[i+k][j+k] == standard)
                    {
                        if(length < k+1) 
                        {
                            length = k+1;
                        }
                    }
                }
            }
        }
    }
    cout<<length*length<<'\n';
}