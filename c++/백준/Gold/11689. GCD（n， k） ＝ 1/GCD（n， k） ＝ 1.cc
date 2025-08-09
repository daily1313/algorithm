#include <iostream>

using namespace std;

// get Result Using Euler's Phi Function
typedef unsigned long long ull;
ull number;
ull ans;
void optimizeInputAndOutput()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
// Euler(number) = number * / p * p - 1 if(number % p ==0)
void input()
{
    cin >> number;
}
ull getResult(ull number)
{
    for (long long p = 2; p * p <= number; p++)
    {
        if (number % p == 0)
        {
            ans = ans / p * (p - 1);
        }
        while (number % p == 0)
        {
            number /= p;
        }
    }
    if (number == 1)
        return ans;
    else
        return ans / number * (number - 1);
}
int main()
{
    optimizeInputAndOutput();
    input();
    ans = number;
    cout << getResult(number) << '\n';
}