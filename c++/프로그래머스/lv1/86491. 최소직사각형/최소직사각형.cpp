#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
    for(int i=0;i<sizes.size();i++)
    { 
        if(sizes[i][0] < sizes[i][1])
        {
            // int temp = sizes[i][0];
            // sizes[i][0] = sizes[i][1];
            // sizes[i][1] = temp;
            swap(sizes[i][1],sizes[i][0]);
        }
    }
    int max_row = sizes[0][0];
    int max_col = sizes[0][1];
    
    for(int i=1;i<sizes.size();i++)
    {
        if(sizes[i][0] > max_row) max_row = sizes[i][0];
        if(sizes[i][1] > max_col) max_col = sizes[i][1];
    }
    
    return max_row * max_col;
}