#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    
    int row = 0;
    int col = 0;
    
    for(const auto &elem : keyinput)
    {
        if(elem == "right") 
        {
            if(row == board[0] / 2) continue; 
            row += 1;
        }
        if(elem == "left") 
        {
            if(row == (-1 * (board[0] / 2))) continue; 
            row -= 1;
        }
        if(elem == "up") 
        {
            if(col == board[1] / 2) continue; 
            col += 1;
        }
        if(elem == "down") 
        {
            if(col == (-1 * (board[1] / 2))) continue; 
            col -= 1;
        }
    }
    
    if(row > (board[0] / 2) && row > 0) {
        while(row > (board[0] / 2)) {
            row--;
        }
    }
    
    if(abs(row) > (board[0] / 2) && row < 0) {
        while(abs(row)> (board[0] / 2)) {
            row++;
        }
    }
    
    if(col > (board[1] / 2) && col > 0) {
        while(col > (board[1] / 2)) {
            col--;
        }
    }
    
    if(abs(col) > (board[1] / 2) && col < 0) {
        while(abs(col) > (board[1] / 2)) {
            col++;
        }
    }
    answer.push_back(row);
    answer.push_back(col);
    return answer;
}