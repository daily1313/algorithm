#include <iostream>
#include <bitset>
#include <string>
int res = 0;
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long m = ~n + 1;
    string a = bitset<32>(n).to_string();
    string b = bitset<32>(m).to_string();
    for(int i=0;i<32;i++)
    {
        if(a[i] != b[i]) res++;
    }
    cout<<res<<'\n';
}