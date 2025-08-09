#include <iostream>
#include <algorithm>
int a[100001];

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int s = 0;
    int e = n-1;

    int x;
    cin>>x;
    int ans = 0;
    int sum = 0;
    sort(a, a+n);
    while(s<e && s<n && e<n) 
    {
        if(a[s] + a[e] > x) 
        {
            e--;
        }
        else if(a[s] + a[e] < x)
        {
            s++;
        }
        if(a[s] + a[e] == x) 
        {
            ans++;
            s++;
            e--;
        }
        
    }
    cout<<ans<<'\n';
    return 0;
}