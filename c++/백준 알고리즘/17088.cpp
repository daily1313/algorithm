#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << 0 << '\n';
        return 0;
    }
    // 수가 하나인 경우

    int ans = -1;
    for (int d1 = -1; d1 <= 1; d1++)
    {
        // 첫항 차이
        for (int d2 = -1; d2 <= 1; d2++)
        {
            // 두번째 항 차이
            int change = 0;
            if (d1 != 0)
                change += 1;
            if (d2 != 0)
                change += 1;
            int a0 = a[0] + d1;
            // 바뀐 첫항
            int diff = (a[1] + d2) - a0;
            // 공차
            bool check = true;
            int an = a0 + diff;
            for (int i = 2; i < n; i++)
            {
                an += diff;
                if (a[i] == an)
                    continue;
                if (a[i] - 1 == an)
                {
                    change += 1;
                }
                else if (a[i] + 1 == an)
                {
                    change += 1;
                }
                else
                {
                    check = false;
                    break;
                }
            }
            if (check)
            {
                if (ans == -1 || ans > change)
                {
                    ans = change;
                }
            }
        }
    }
    cout << ans;
}