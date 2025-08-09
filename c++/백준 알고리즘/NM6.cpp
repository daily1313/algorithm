#include <iostream>
#include <algorithm>

using namespace std;
int n, m;
bool check[9];
int num[9];
int result[9];
void print(int idx)
{
    if (idx == m)
    {
        for (int i = 1; i < m; i++)
        {
            if (result[i] < result[i - 1])
                return;
        }
        for (int i = 0; i < m; i++)
        {
            cout << result[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (check[i])
            continue;
        check[i] = true;
        result[idx] = num[i];
        print(idx + 1);
        check[i] = false;
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);
    print(0);
}
