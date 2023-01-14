#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>
#include <set>
using namespace std;

char board[5][5];
int mov[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
set<string>s;
vector<char>elem;

void dfs(int x,int y)
{

    if(elem.size()==6) 
    {
        string str = "";
        for(const auto &v2 : elem)
        {
            str += v2;
        }
        s.insert(str);
        return;
    }
    for(int i=0;i<4;i++)
    {
        int r = x + mov[i][0];
        int c = y + mov[i][1];
        
        if(r>=0 && c>=0 && r<5 && c<5)
        {
            elem.push_back(board[r][c]);
            dfs(r,c);
            elem.pop_back();
        }
    }
}

int main()
{
    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            cin >> board[i][j];
        }
    }

    for(int i=0;i<5;++i)
    {
        for(int j=0;j<5;++j)
        {
            elem.push_back(board[i][j]);
            dfs(i,j);
            elem.pop_back();        
        }
    }

    
    cout<<s.size();
}
