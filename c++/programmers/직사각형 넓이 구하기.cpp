#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int solution(vector<vector<int>> dots) {
    int row;
    int col;
    for(int i=0;i<dots.size()-1;i++)
    {
        for(int j=i+1;j<dots.size();j++)
        {
            if(dots[i][0] == dots[j][0] && dots[i][1] != dots[j][1])
            {
                row = abs(dots[i][1] - dots[j][1]);
            }
            if(dots[i][1] == dots[j][1] && dots[i][0] != dots[j][0])
            {
                col = abs(dots[i][0] - dots[j][0]);
            }
        }
    }
    return row*col;
}