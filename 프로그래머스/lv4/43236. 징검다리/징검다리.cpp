#include <bits/stdc++.h>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    sort(rocks.begin(),rocks.end());
    int left = 0, right = distance;
    int answer = 0;
    
    while(left<=right)
    {
        int mid = (left + right) / 2;
        int idx = 0;
        int cnt = 0;
        
        for(int i=0;i<rocks.size();i++)
        {
            if(rocks[i] - idx < mid) 
            {
                cnt++;
            } 
            else 
            {
                idx = rocks[i];
            }
        }
        if(distance - idx < mid) cnt++;
        if(cnt<=n) 
        {
            answer = max(mid, answer);
            left = mid + 1;
        } else
        {
            right = mid - 1;
        }
    }
    
    return answer;
}