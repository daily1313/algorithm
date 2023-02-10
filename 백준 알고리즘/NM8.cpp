#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int num[9];
int result[9];
bool check[9];

void print(int idx, int start)
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
    for (int i = start; i < n; i++)
    {
        result[idx] = num[i];
        print(idx + 1, i);
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

    print(0, 0);
}