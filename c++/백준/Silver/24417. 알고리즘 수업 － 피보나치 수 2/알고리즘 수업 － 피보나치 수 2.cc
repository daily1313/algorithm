#include <iostream>

#define max 200000001
using namespace std;
int n;
int fi, se, ans;
void fibonacci(int n)
{
    fi = 1;
    se = 1;
    for(int i=3;i<=n;i++)
    {   
        ans = se;
        se = (se + fi) % 1000000007;
        fi = ans;
    } 
}

int main()
{
    cin>>n;

    fibonacci(n);
    cout<<se<<' '<<n-2;
    return 0;
}