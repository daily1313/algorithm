#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int d[1500001];
    int t[1500001];
    int p[1500001];
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t[i] >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        d[i + t[i]] = max(d[i + t[i]], d[i] + p[i]);
        // 상담 O
        d[i + 1] = max(d[i + 1], d[i]);
        // 상담 X
    }
    cout << d[n] << '\n';
}