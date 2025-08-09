#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;
int k, n;
bool visited[100001];
int numbers[100001];
set<int>s;
vector<int>v;
void dfs(int num,int idx)
{
    if(idx == k)
    {
        s.insert(num);
        return;
    }

    
    for(int i=0;i<n;i++)
    {
        if(visited[i]) continue;
        
        visited[i] = true;

        if(numbers[i]/10) 
        {
            dfs(num*100+numbers[i], idx+1);
        }
        else
        {
            dfs(num*10+numbers[i],idx+1);
        }
        visited[i] = false;
    }

}

int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>numbers[i];
    }

    dfs(1, 0);

    cout<<s.size()<<'\n';
    
}