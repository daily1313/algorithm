#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
using namespace std;
int n, m;
vector<int> PrimeNumber;

vector<int> addPrime(int number)
{
    vector<bool> P(number + 1, true);
    P[1] = false;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (P[i])
        {
            for (int j = i + i; j <= number; j += i)
            {
                P[j] = false;
            }
        }
    }
    
    int sum = 0;
    int min = 2e9;

    for (int i = n; i <= number; i++)
    {
        if (P[i]) 
        {
            sum += i;
        }
        if(P[i] && min > i) {
            min = i;
        }
    }
    PrimeNumber.push_back(sum);
    PrimeNumber.push_back(min);
    return PrimeNumber;
}


int main()
{
    cin>>n>>m;
  
    int sum = 0;
    int min = 10001;
    addPrime(m);
    if(PrimeNumber[0]==0)
    {
        cout<<-1<<'\n';
        return 0;
    }
    cout<<PrimeNumber[0]<<'\n';
    cout<<PrimeNumber[1]<<'\n';
    
    return 0;
}