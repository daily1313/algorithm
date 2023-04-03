#include <iostream>

using namespace std;

int main()
{
    int a1, a0, c, n0;
    cin>>a1>>a0>>c>>n0;
    int result = (a1 * n0 + a0 <= c * n0 && a1 <= c) ? 1 : 0;
    cout<<result<<'\n'; 

}