#include <iostream>

using namespace std;
int n, m;
int num[9];
int check[9];

void print(int idx)
{
    if(idx == m)
    {
        for(int i=1;i<m;i++)
        {
            if(num[i]<num[i-1]) return;
        }
        
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