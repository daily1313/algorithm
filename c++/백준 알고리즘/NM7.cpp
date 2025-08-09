#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int num[8];
int result[8];

void print(int idx)
{
    if (idx == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << result[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        result[idx] = num[i];
        print(idx + 1);
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