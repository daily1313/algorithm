#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;

    priority_queue<int> l;
    // 최대 힙
    priority_queue<int, vector<int>, greater<int>> r;
    // 최소 힙

    while (n--)
    {
        int x;
        cin >> x;

        if (l.empty() || r.empty())
        {
            l.push(x);
        }
        else
        {
            if (x <= l.top())
            {
                l.push(x);
            }
            else if (x >= r.top())
            {
                r.push(x);
            }
            else
            {
                l.push(x);
            }
        }
        while (!(l.size() == r.size() || l.size() == r.size() + 1))
        {
            if (l.size() > r.size())
            {
                r.push(l.top());
                l.pop();
                // 왼 > 오  오른쪽에 왼쪽꺼 push, 왼쪽 pop
            }
            else
            {
                // 왼쪽에 오른쪽꺼 push, 오른쪽 pop
                l.push(r.top());
                r.pop();
            }
        }
        cout << l.top() << '\n';
        // 왼쪽에서 가장 큰 값이 가운데 의미
    }
}