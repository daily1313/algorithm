#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int d[2001];
int a[2001];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        d[i] = 999999;
    }

    d[1] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            if (d[j] != 999999)
            {
                if (i - j <= a[j])
                    d[i] = min(d[i], d[j] + 1);
            }
        }
    }
    if (d[n] == 999999)
        cout << "-1" << '\n';
    else
        cout << d[n];
}