#include <iostream>
#include <map>
using namespace std;

int main()
{
    
    map<pair<int, int>, int> map_list;
    int n, m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        for(int j=x1;j<=x2;j++)
        {
            for(int k=y1;k<=y2;k++)
            {
                ++map_list[make_pair(j, k)];
            }
        }
    }
    int res = 0;
    
    
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
        {
            if(map_list[make_pair(i, j)] > m) res++; 
        }
    }    
    
    cout<<res<<'\n';
}