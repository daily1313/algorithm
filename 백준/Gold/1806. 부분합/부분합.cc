#include <iostream>
#include <vector>
int a[100001];
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0, sum = a[0], ans = 210000000;
    while (j < n)
    {
        if (sum < m)
        {
            j += 1;
            sum += a[j];
        }
        else if (sum == m)
        {
            if (j - i + 1 < ans)
            {
                ans = j - i + 1;
            }
            j+=1;
            sum += a[j];
        }
        else if (sum > m)
        {
            if (j - i + 1 < ans)
            {
                ans = j - i + 1;
            }
            sum -= a[i];
            i++;
        }
    }
    if(ans > n) ans = 0;

    cout<<ans;
}
