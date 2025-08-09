#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, t;


int main()
{
    cin>>t;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    vector<int> x;
    for(int i=0;i<n;i++) {
        int sum = 0;
        for(int j=i;j<n;j++) {
            sum += a[j];
            x.push_back(sum);
        }
    }
    // a의 모든 부분합

    vector<int> y;
    for(int i=0;i<m;i++) {
        int sum = 0;
        for(int j=i;j<m;j++) {
            sum += b[j];
            y.push_back(sum);
        }
    }
    // b의 모든 부분합

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    long long ans = 0;

    for(int i=0;i<x.size();i++)
    {
        auto p = equal_range(y.begin(), y.end(), t-x[i]);
        ans += p.second - p.first;
    }

    cout<<ans<<'\n';
    return 0;
}