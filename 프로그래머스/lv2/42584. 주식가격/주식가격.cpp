#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> prices) {
//     vector<int> answer;
    
//     for(int i=0;i<prices.size();i++)
//     {
//         int count = 0;
//         for(int j=i+1;j<prices.size();j++)
//         {
//             count++;
//             if(prices[i]>prices[j]) 
//             {
//                 break;
//             }
//         }
//         answer.push_back(count);
//     }
    
    vector<int> answer(prices.size());
    stack<int> s;
    int size = prices.size();
    for(int i=0;i<size;i++){
        while(!s.empty()&&prices[s.top()]>prices[i]){
            // 값이 줄어들었다면
            answer[s.top()] = i-s.top(); // 현재 시간 - 해당 시간
            s.pop(); 
        }
        s.push(i);
    }
    while(!s.empty()){
        answer[s.top()] = size-s.top()-1; // 종료 시간 - 해당 시간
        s.pop();
    }
    return answer;

}