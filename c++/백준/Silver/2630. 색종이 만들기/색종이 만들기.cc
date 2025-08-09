#include <iostream>

using namespace std;

int paper[131][131];
int white_count, blue_count = 0;

void check(int r, int c, int n)
{
    bool white = true;
    bool blue = true;
    for(int i=r;i<r+n;i++)
    {
        for(int j=c;j<c+n;j++)
        {
            if(paper[i][j]==1) white = false;
            else if(paper[i][j]==0) blue = false;            
        }
    }
    if(white){ 
        white_count++;
        return;
    }
    else if(blue) { 
        blue_count++;
        return;
    }
    check(r, c, n/2);
    check(r + n/2, c, n/2);
    check(r, c+n/2, n/2);
    check(r+n/2, c+n/2, n/2);
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>paper[i][j];
        }
    }
    check(0, 0, n);

    cout<<white_count<<'\n';
    cout<<blue_count<<'\n';
}

    