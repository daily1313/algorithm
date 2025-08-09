#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int n;
        cin>>n;
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            int cx,cy,r,d1,d2;
            cin>>cx>>cy>>r;
            d1= sqrt(pow((x1-cx),2) + pow((y1-cy),2));
            d2= sqrt(pow((x2-cx),2) + pow((y2-cy),2));
            if(d1<r && d2<r) continue;
            else if(d1<r || d2<r) cnt++;
        }
        cout<<cnt<<'\n';
    }
}