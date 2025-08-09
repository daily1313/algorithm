#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int>v1;
    vector<int>v2;
    int a,b;
    cin>>a>>b;
    for(int i=0;i<a;i++)
    {
        int num1;
        cin>>num1;
        v1.push_back(num1);
    }

    for(int i=0;i<b;i++)
    {
        int num2;
        cin>>num2;
        v2.push_back(num2);
    }

    int cnt = 0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for(int i=0;i<v2.size();i++)
    {
        if(binary_search(v1.begin(),v1.end(),v2[i])) continue;
        else cnt++; 
    }

    for(int i=0;i<v1.size();i++)
    {
        if(binary_search(v2.begin(),v2.end(),v1[i])) continue;
        else cnt++; 
    }

    cout<<cnt;
}