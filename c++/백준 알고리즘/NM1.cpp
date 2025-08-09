#include <iostream>

using namespace std;
bool check[9] = {0};
int num[9];
int n,m;

void print(int idx)
{
    if(idx == m)
    {
        for(int i=0;i<m;i++)
        {
            cout<<num[i]<<' ';
        }
        cout<<'\n';
        return;
    }

    for(int i=1;i<=n;i++)
    {
        if(!check[i])
        {
            check[i] = true;
            num[idx] = i;
            print(idx+1);
            check[i] = false;
        }
    }
}

int main()
{
    cin>>n>>m;
    print(0);

    return 0;
}