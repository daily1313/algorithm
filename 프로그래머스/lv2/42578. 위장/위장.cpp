#include <bits/stdc++.h>

using namespace std;

// 옷 종류 key, 해당 개수 value 
// 종류가 같으면 개수를 하나 늘려준다. 
// (옷1 + 1) * (옷2 + 1) .. * (옷3 + 1) * .. -1(하나도 안 입는 경우)

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    unordered_map<string, int> m;
    for(int i=0;i<clothes.size();i++)
    {
        ++m[clothes[i][1]];
    }
    
    for(auto it= m.begin(); it != m.end(); it++)
    {
        answer *= (it->second + 1);
    }
    
    
    return answer - 1;
}