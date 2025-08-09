#include <iostream>

using namespace std;
int count1, count2;
int f[41];
int n;
int fib(int n)
{
    if(n==1 || n==2) return 1;
    else
    { 
        count1++;
        return (fib(n-1) + fib(n-2));
    }

}
void fibonacci(int n)
{
    
    f[1] = f[2] = 1;
    for(int i=3;i<=n;i++)
    {
        count2++;
        f[i] = f[i-1] + f[i-2];
    } 
}

int main()
{
    cin>>n;
    fib(n);
    cout<<++count1<<' ';
    fibonacci(n);
    cout<<count2;
    return 0;
}