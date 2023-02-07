#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// A[a] + B[b] + C[c] + D[d] = 0 O(N^4)
// A[a] + B[b] = - (C[c] + D[d]) O(N^2) + O(N^2)
int main()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    vector<int> absum, cdsum;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            absum.push_back(a[i] + b[j]);
            cdsum.push_back(c[i] + d[j]);
        }
    }
    sort(cdsum.begin(), cdsum.end());
    sort(absum.begin(), absum.end());
    long long ans = 0;
    for (auto i : absum)
    {
        auto r = equal_range(cdsum.begin(), cdsum.end(), -i);
        // pair벡터 lower => first, upper => second
        ans += r.second - r.first;
    }
    cout << ans;
}