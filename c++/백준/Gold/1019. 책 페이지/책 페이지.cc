#include <iostream>
#include <map>

using namespace std;
long long page[10] = {0};

void calculate(int x, int digit)
{
    while(x>0)
    {
        page[x%10] += digit;
        x/=10;
    }
}
void solve(int start, int end, int digit)
{
    
        while(end % 10 != 9 && start<=end)
        {
            calculate(end, digit);
            end--;
        }

        if(end < start) return;

        while(start % 10 != 0 && start<=end)
        {
            calculate(start, digit);
            start++;
        }

        int cnt = (end/10-start/10+1);

        for(int i=0;i<10;i++)
        {
            page[i] += cnt * digit;
        }

        solve(start/10, end/10, digit*10);
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int end;
    cin>>end;
    int start=1;
    int digit=1;
    
    solve(start, end, digit);
    
    for(int i=0;i<10;i++)
    {
        cout<<page[i]<<'\n';
    }
}