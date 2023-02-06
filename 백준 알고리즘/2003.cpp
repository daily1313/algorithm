#include <iostream>
#include <vector>

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

    int sum = a[0];
    int l = 0;
    int right = 0;
    int ans = 0;
    while (right < n)
    {
        if (sum < m)
        {
            right += 1;
            sum += a[right];
        }
        else if (sum == m)
        {
            ans += 1;
            right += 1;
            sum += a[right];
        }
        else if (sum > m)
        {
            sum -= a[l];
            l++;
        }
    }
    cout << ans << '\n';
    return 0;
}