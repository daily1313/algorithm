#include <iostream>
#include <set>
#include <vector>

using namespace std;

set<int>s;
int main()
{
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        s.insert(num);
    }

    

    for(auto elem : s)
    {
        cout<<elem<<' ';
    }
    return 0;
}