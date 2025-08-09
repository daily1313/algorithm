#include <iostream>
#include <algorithm>
using namespace std;

int dp_l[1001];
int dp_s[1001];

int main()
{
    int n;
    cin>>n;
    int s[1001];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }

    for(int i=0;i<n;i++)
    {
        dp_l[i] = 1;
        for(int j=0;j<i;j++)
        {
            if(s[j] < s[i] && dp_l[i] < dp_l[j] + 1)
            {
                dp_l[i] = dp_l[j] + 1;
            }
        }
    }
    // 가장 긴 증가하는 부분 수열
    for(int i=n-1;i>=0;i--)
    {
        dp_s[i] = 1;
        for(int j=n-1;j>i;j--)
        {
            if(s[j] < s[i] && dp_s[i] < dp_s[j] + 1)
            {
                dp_s[i] = dp_s[j] + 1;
            }
        }
    }
    //가장 긴 감소하는 부분 수열
    int answer = -1;
    for(int i=0;i<n;i++)
    {
        if(answer < dp_l[i] + dp_s[i] - 1)
        {
            answer = dp_l[i] + dp_s[i] - 1;
        }
    }

    cout<<answer<<'\n';
    return 0;


}