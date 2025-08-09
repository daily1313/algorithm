#include <bits/stdc++.h>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    sort(times.begin(),times.end());
    long long left = 1;
    // 가장 짧은 시간
    long long right =  (long long)times[times.size()-1] * n;
    // 가장 긴 시간
    while(left<=right) 
    {
        long long result = 0;
        long long mid = (left + right) / 2;
        for(int i=0;i<times.size();i++)
        {
            result += mid / times[i];
            // 심사 받는 사람 누적 
        }
        
        if(result < n) 
        {
            left = mid + 1;
        }
        // 심사 받아야 하는 수 충족 x -> 평균값 늘려준다. 
        else 
        {
            answer = mid;
            right = mid - 1;
        }
        // 심사 받아야 하는 수 충족 o -> 평균값 줄여준다. 
    }
    
    return answer;
}