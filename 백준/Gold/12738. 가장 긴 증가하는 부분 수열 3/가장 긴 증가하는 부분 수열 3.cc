#include <iostream>
#include <algorithm>
#include <vector>

// 기존 이중포문 O(N^2) -> 이진탐색 시간복잡도 O(NlogN)
using namespace std;

int main()
{
    int length=0;
    int n;
    cin>>n;
    vector<int>v;
    v.push_back(-2e9);
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(v.back()<num)
        {
            v.push_back(num);
            length++;
        }
        else
        {
            auto it = lower_bound(v.begin(),v.end(),num);
            *it = num;
        }
    }
    cout<<length<<'\n';
}