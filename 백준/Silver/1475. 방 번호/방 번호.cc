#include <iostream>

using namespace std;
int cnt[10];
int main()
{
    int num;
    cin>>num;

    int sixAndNineCount = 0;

    while(num)
    {
        if(num%10 == 6 || num%10 == 9)
        {
            sixAndNineCount++;
        }
        else
        {
            cnt[num%10]++;
        }
        num/=10;
    }

    cnt[6] = cnt[9] = (sixAndNineCount + 1) / 2;

    int res = 0;

    for(auto elem : cnt) 
    {
        res = max(res, elem);
    }
    
    cout<<res<<'\n';
    
}