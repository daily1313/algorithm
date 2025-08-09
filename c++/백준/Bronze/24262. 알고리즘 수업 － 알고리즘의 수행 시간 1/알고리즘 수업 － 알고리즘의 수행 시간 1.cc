#include <iostream>

using namespace std;

int MenOfPassion(int n)
{
    if(n) return 1;
    else return 0;
}
int main()
{
    int n;
    cin>>n;
    cout<<MenOfPassion(n)<<'\n';
    cout<<0<<'\n';

}