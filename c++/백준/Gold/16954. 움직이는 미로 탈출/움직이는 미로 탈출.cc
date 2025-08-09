#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include <queue>
using namespace std;

bool check[8][8][9];

int mov[9][2] = {{-1,0},{1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1},{0,0}};

int main()
{
    int n = 8;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    queue<tuple<int, int, int>> q;
    check[7][0][0] = true;
    q.push(make_tuple(7,0,0));
    bool result = false;

    while(!q.empty())
    {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int t = get<2>(q.front());
        q.pop();
        if(x==0 && y==7) result = true;
        for(int k=0;k<9;k++)
        {
            int r = x + mov[k][0];
            int c = y + mov[k][1];
            int nt = min(t+1, 8);
            if(r>=0 && r<n && c>=0 && c<n)
            {
                if(r-t>=0 && a[r-t][c] == '#') continue;
                if(r-t-1>=0 && a[r-t-1][c] == '#') continue;
                if(!check[r][c][nt]) 
                {
                    check[r][c][nt] = true;
                    q.push(make_tuple(r,c,nt));
                }
            }
        }
    }

    cout<< (result ? 1 : 0) << '\n';

}