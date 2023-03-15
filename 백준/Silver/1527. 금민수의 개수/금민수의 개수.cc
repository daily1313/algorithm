#include <iostream>

long long res = 0;
long long start = 0;
long long e = 0;
using namespace std;

void findSevenAndFour(long long number)
{
    if(number>e) return;
    if(number >= start && number <=e)
    {
        res++;
    }
    findSevenAndFour(number*10+4);
    findSevenAndFour(number*10+7);
}


int main()
{

    cin>>start>>e;
    findSevenAndFour(4);
    findSevenAndFour(7);

    cout<<res<<'\n';
    return 0;

}