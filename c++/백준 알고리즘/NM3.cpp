#include <iostream>

using namespace std;
int n, m;
bool check[9];
int num[9];

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
        check[i] = true;
        num[idx] = i;
        print(idx+1);
        check[i] = false;
    }
}

int main()
{
    cin>>n>>m;
    print(0);
}