#include <iostream>

using namespace std;
// 1/1 ->
// 2/1 1/2 <-
// 3/1 2/2 1/3 ->
// 4/1 3/2 2/3 1/4 <-

int main()
{
    int n; cin>>n;
    int index = 0;
    int sum;
    // 1. 어느 행인가 
    while(1)
    {
        index++;
        sum = index * (index+1) / 2;
        if(n<=sum) break;
    }
    // 2. 행에서 몇 번째 값인가 ? 
    int num = n - (index - 1) * index / 2;
    // 3. 짝수 행인가, 홀수 행인가 ?
    if(index % 2 == 0) cout<<num<<'/'<<index-num+1<<'\n';
    else cout<<index-num+1<<'/'<<num;
}
