#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    bool square[101][101];
    memset(square,false,sizeof(square));
    int n;
    cin>>n;
    int area = 0;
    while(n--)
    {
        int w,h;
        cin>>w>>h;
        
        for(int i=w;i<w+10;i++)
        {
            for(int j=h;j<h+10;j++)
            {
                if(!square[i][j])
                {
                    area++;
                    square[i][j] = true;
                }
            }
        }
    }
    cout<<area<<'\n';
}