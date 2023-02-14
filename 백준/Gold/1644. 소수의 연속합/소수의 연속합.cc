#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
vector<int>PrimeNumber;
int n;
// 투 포인터 알고리즘
// 2개의 포인터를 사용하여 구간의 길이를 가변적 적으로잡아가며 특정 조건을 만족하는 구간을 찾는다. 모든 연속 구간을 잡는다면 O(N^2)이 될 것이지만 투 포인터 알고리즘을 사용하면 O(N) 의 시간복잡도로 풀 수 있다. 두 포인터 각각 N번 움직이기 때문에 N + N = 2N 번의 연산이 있는 셈이다
vector<int> addPrime(int number) 
{
    vector<bool> P(number+1, true);
    for(int i=2;i<=sqrt(number);i++)
    {
        if(P[i]) 
        {
            for(int j=i+i;j<=number;j+=i) 
            {
                P[j] = false;
            }
        }
    }
    
    for(int i=2;i<=number;i++)
    {
        if(P[i]) PrimeNumber.push_back(i);
    }
    return PrimeNumber;
}

int main()
{
    
    cin>>n;
    if(n==1)
    {
        cout<<0<<'\n';
        return 0;
    }
    addPrime(n);
    int left = 0, right = 0, sum = PrimeNumber[0], cnt = 0;

    
    while(left <= right && right < PrimeNumber.size())
    {
        if(sum < n) 
        {
            sum += PrimeNumber[++right];
           
        }
        else if(sum == n)
        {
            cnt++;
            sum += PrimeNumber[++right];
        }
        else if(sum > n) 
        {
            sum -= PrimeNumber[left++];
        }
    }
    cout<<cnt<<'\n';
}