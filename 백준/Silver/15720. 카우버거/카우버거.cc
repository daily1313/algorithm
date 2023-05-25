#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int burger[1001];
int side[1001];
int beverage[1001];

int main()
{
    
    int B, C, D;

    cin>>B>>C>>D;
    int res = 0;
    int discount_res = 0;
    for(int i=0;i<B;i++)
    {
        cin>>burger[i];
        res += burger[i];
    }
    for(int i=0;i<C;i++)
    {
        cin>>side[i];
        res += side[i];
    }
    for(int i=0;i<D;i++)
    {
        cin>>beverage[i];
        res += beverage[i];
    }

    sort(burger, burger+B, greater<int>());
    sort(side, side+C, greater<int>());
    sort(beverage, beverage+D, greater<int>());

    int min_size = min(B, min(C, D));

    int now_index = 0;
    for(int i=0;i<min_size;i++)
    {
        discount_res += ((burger[i] + side[i] + beverage[i]) * 9) / 10;
        now_index = i;
    }
    
    now_index++;

    for(int i=now_index;i<B;i++)
    {
        discount_res += burger[i];
    }
    for(int i=now_index;i<C;i++)
    {
        discount_res += side[i];
    }
    for(int i=now_index;i<D;i++)
    {
        discount_res += beverage[i];
    }

    cout<<res<<'\n';
    cout<<discount_res<<'\n';

}