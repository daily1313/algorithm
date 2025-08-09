#include <iostream>
#include <stack>

using namespace std;

int height[500001];

int main()
{
    int n;
    cin >> n;
    stack<pair<int, int>> s;
    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }
    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        pair<int, int> p = {height[i], 1};
        while (!s.empty())
        {
            if (s.top().first <= height[i])
            {
                ans += (long long)s.top().second;
                if (s.top().first == height[i])
                {
                    p.second += s.top().second;
                }
                s.pop();
            }
            else
            {
                break;
            }
        }
        if (!s.empty())
            ans += 1LL;
        s.push(p);
    }

    cout << ans << '\n';
}