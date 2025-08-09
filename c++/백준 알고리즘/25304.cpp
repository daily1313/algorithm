#include <iostream>

using namespace std;

int money[101];


int main()
{
    int sum;
    int n;
    int result = 0;
    cin>>sum>>n;
    
    for(int i=1;i<=n;i++)
    {
        int cnt;
        cin>>money[i]>>cnt;
        result += (money[i] * cnt);

    }
    if(sum!=result) cout<<"No"<<'\n';
    else cout<<"Yes"<<'\n';
}