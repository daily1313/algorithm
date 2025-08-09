#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

void hanoi(int n, int a, int b, int c)
{
    if (n == 1)
    {
        printf("%d %d\n", a, c);
    }
    else
    {
        hanoi(n - 1, a, c, b);
        printf("%d %d\n", a, c);
        hanoi(n - 1, b, a, c);
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    string count;
    count = to_string(pow(2, n));
    int idx = count.find('.');
    count = count.substr(0, idx);
    count[count.length() - 1] -= 1;

    cout << count << '\n';

    int a = 1;
    int b = 2;
    int c = 3;
    if (n <= 20)
        hanoi(n, a, b, c);
}
