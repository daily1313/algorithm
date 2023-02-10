#include <iostream>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

int num[9];
int result[9];
bool check[9];
set<vector<int>>s;
vector<int>v;
vector<int>::iterator elem;
int n, m;

void print(int idx, int start)
{
    if(idx == m)
    {
        for(int i=0;i<m;i++)
        {
            v.push_back(result[i]);
        }
        s.insert(v);
        v.clear();
        return;
    }
    int last = 0;
    for(int i=start;i<n;i++) 
    {
        if(last != num[i])
        {
            check[i] = true;
            result[idx] = num[i];
            last = num[i];
            print(idx+1, i);
            check[i] = false;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    sort(num,num+n);
    print(0, 0);
    
    for(auto v : s)
    {
        for(auto elem : v) {
            cout<<elem<<' ';
        }
        cout<<'\n';    
    }

}