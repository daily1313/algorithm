#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int score1[4];
    int score2[4];

    int sum1 = 0, sum2 = 0;
    for(int i=0;i<4;i++)
    {
        cin>>score1[i];
        sum1+=score1[i];
    }

    for(int i=0;i<4;i++)
    {
        cin>>score2[i];
        sum2+=score2[i];
    }

    int result = sum1 >= sum2 ? sum1 : sum2;
    cout<<result;
}