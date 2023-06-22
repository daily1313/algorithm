#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main()
{
    int n1, m1, n2, m2;
    cin>>n1>>m1>>n2>>m2;
    int numerator = n1 * m2 + m1 * n2;
    int denominator = m1 * m2;

    int min_numerator = numerator/gcd(numerator, denominator);
    int min_denominator = denominator/gcd(numerator, denominator);

    cout<<min_numerator<<' '<<min_denominator;
    return 0;
}

