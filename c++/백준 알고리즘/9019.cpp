#include <iostream>
#include <queue>
#include <cstring>
#include <string>

bool check[10001];
int start, End;
using namespace std;

void bfs()
{
    queue<pair<int, string>> q;
    q.push(make_pair(start, ""));
    check[start] = true;
    while (!q.empty())
    {
        int x = q.front().first;
        string result = q.front().second;
        q.pop();
        if (x == End)
        {
            cout << result << '\n';
            return;
        }

        int d = (x * 2) % 10000;
        if (!check[d])
        {
            check[d] = true;
            q.push(make_pair(d, result + "D"));
        }

        int s = x - 1 < 0 ? 9999 : x - 1;
        if (!check[s])
        {
            check[s] = true;
            q.push(make_pair(s, result + "S"));
        }

        int l = (x % 1000) * 10 + (x / 1000); // ex) 1234 -> 2341
        if (!check[l])
        {
            check[l] = true;
            q.push(make_pair(l, result + "L"));
        }

        int r = (x % 10) * 1000 + (x / 10); // ex) 1234 -> 4123
        if (!check[r])
        {
            check[r] = true;
            q.push(make_pair(r, result + "R"));
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> start >> End;
        memset(check, false, sizeof(check));
        bfs();
    }
    return 0;
}