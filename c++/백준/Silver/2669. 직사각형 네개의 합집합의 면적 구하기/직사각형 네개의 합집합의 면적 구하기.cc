#include <iostream>

int rectangle[101][101];
bool visited[101][101];
int x1, y1, x2, y2;
int res = 0;

const int MAX_ROW_LENGTH = 101;
const int MAX_COL_LENGTH = 101;

using namespace std;

bool checkRectangleArea(int x, int y)
{
    if(visited[x][y]) return true;
    return false;
}

void setUpRectangleArea(int x1, int y1, int x2, int y2)
{
    for(int i=x1;i<x2;i++)
    {
        for(int j=y1;j<y2;j++)
        {
            visited[i][j] = true;
        }
    }
}

void input()
{
    for(int i=0;i<4;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        setUpRectangleArea(x1, y1, x2, y2);
    }
}

void getRectangleArea()
{
    for(int i=1;i<MAX_ROW_LENGTH;i++)
    {
        for(int j=1;j<MAX_COL_LENGTH;j++)
        {
            if(checkRectangleArea(i, j)) res++;
        }
    }
}

int main()
{
    input();
    getRectangleArea();
    cout<< res << '\n';
}
