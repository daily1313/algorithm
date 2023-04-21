#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int temporature[100001];
int main()
{
    int n, k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>temporature[i];
    }
    int l = 1;
    int r = k;
    long long sum = 0;
    for(int i = l; i <= k; i++)
    {  
       sum += temporature[i]; 
    }
    vector<long long> v;
    v.push_back(sum);
    
    while(l<=r && l<=n && r<=n)
    {
        if(r+1 == n+1) break;
        sum -= temporature[l++];
        sum += temporature[++r];
        v.push_back(sum);
    }
    long long res = *max_element(v.begin(), v.end());
    cout<<res<<'\n';
    
    

}