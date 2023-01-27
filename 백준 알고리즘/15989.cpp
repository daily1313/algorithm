#include <iostream>
#include <cstring>
using namespace std;

int d[10001];
int main()
{
    int nums[3] = {1, 2, 3};
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        memset(d,0,sizeof(d));
        d[0] = 1;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j - nums[i] >= 0)
                {
                    d[j] += d[j - nums[i]];
                }
            }
        }
        cout << d[n] << '\n';
    }
}