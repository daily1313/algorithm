#include <string>
#include <vector>

using namespace std;
int dp_f[1000001];
int dp_s[1000001];
int solution(vector<int> money) {
    int answer = -1;
    
    //첫번째 집 터는 경우
    dp_f[0] = money[0];
    dp_f[1] = money[0];
    
    //두번째 집 터는 경우
    dp_s[0] = 0;
    dp_s[1] = money[1];
    
    for(int i=2;i<money.size()-1;i++)
    {
        dp_f[i] = max(dp_f[i-2] + money[i], dp_f[i-1]);
    }
    
    for(int i=2;i<money.size();i++)
    {
        dp_s[i] = max(dp_s[i-2] + money[i], dp_s[i-1]);
    }
    
    
    return max(dp_f[money.size()-2],dp_s[money.size()-1]);
}