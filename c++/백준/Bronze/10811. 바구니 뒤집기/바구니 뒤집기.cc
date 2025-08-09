#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int box[101];
    for(int i=1;i<=n;i++)
    {
        box[i] = i;
    }

    for(int i=0;i<m;i++)
    {
        int first, end;
        cin>>first>>end;
        int l = first;
        int r = end;
        if(first == end) continue;
        for(int k=0;k<(end-first+1)/2;k++)
        {
            int temp = box[l];
            box[l] = box[r];
            box[r] = temp;
            l++;
            r--;
        }
    }

    for(int i=1;i<=n;i++)
    {
        cout<<box[i]<<' ';
    }
    return 0;
}