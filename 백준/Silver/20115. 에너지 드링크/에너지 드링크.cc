#include <iostream>
#include <algorithm>

using namespace std;
int energy[100001];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>energy[i];
    }
    sort(energy, energy + n, greater<int>());
    double sum = energy[0];
    int i = 0;
    while(n--)
    {
        sum += (double(energy[++i]) / 2);
    }
    cout<<sum<<'\n';
}