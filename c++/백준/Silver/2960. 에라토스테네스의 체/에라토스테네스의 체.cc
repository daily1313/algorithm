#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int n, k;

bool check[1001];
int res;
void isPrime(int number)
{
    memset(check, true, sizeof(check));
    int count = 0;
    
    for (int i = 2; i <= number; i++)
    {
        for (int j = i; j <= number; j += i)
        {
            if(check[j])
            {
                check[j] = false;
                count++;
                if (count == k)
                {
                    res = j;
                    return;
                }
            }
        }
    }
}


int main()
{
    cin >> n >> k;
    isPrime(n);
    cout<<res<<'\n';
    return 0;
}