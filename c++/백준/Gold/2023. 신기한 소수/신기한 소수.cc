#include <iostream>

using namespace std;
int n;
int startPrimeNumberList[4] = {2, 3, 5, 7};
bool checkPrimeNumber(int now)
{
    for (int i = 2; i * i <= now; i++)
    {
        if (!(now % i))
            return false;
    }
    return true;
}

void dfs(int now, int idx)
{
    if (idx == n)
    {
        cout << now << '\n';
        return;
    }

    for (int i = 1; i <= 9; i += 2)
    {
        if (checkPrimeNumber(now * 10 + i))
        {
            dfs(now * 10 + i, idx + 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (auto elem : startPrimeNumberList)
    {
        dfs(elem, 1);
    }
}