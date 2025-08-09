#include <iostream>

using namespace std;

int main()
{
    int start = 665;
    int n;
    cin>>n;
    int cnt = 0;
    int num;

    while(1)
    {
        num = ++start;
        while(num>0)
        {
            if(num % 1000 == 666)
            {
                cnt++;
                break;
            }
            else num /= 10;
        }
        if(cnt == n) break;
        
    }
    cout<<start<<'\n';

    return 0;
}