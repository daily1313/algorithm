#include <iostream>

using namespace std;
bool check[9];
int num[9];
int n,m;

void print(int idx, int start)
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
    for(int i=start;i<=n;i++)
    {
        if(check[i]) continue;
        // 사용되었으면 pass (오름차순으로 나타내기 위한 방법)
        if(!check[i])
        {
            check[i] = true;
            num[idx] = i;
            print(idx+1,i+1);
            check[i] = false;
        }
    }
}

int main()
{
    cin>>n>>m;
    print(0, 1);
    return 0;
}