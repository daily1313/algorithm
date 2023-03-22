#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, k;
vector<int>elem;
int sum = 0;
int a[3] = {1, 2, 3};
bool visited[3];
int cnt = 0;
void dfs(int sum)
{
    if(sum > n) return;
    if(sum == n)
    {
        cnt++;
        if(cnt == k)
        {
            string temp = "";
            for(int i=0;i<elem.size();i++)
            {
                if(i==elem.size()-1) 
                {
                    temp += to_string(elem[i]);
                    
                }
                else
                {
                    
                    temp += to_string(elem[i]);
                    temp += "+";
                }
            } 
            cout<<temp;
            return;
        }
        return;
    }
    for(int i=0;i<3;i++)
    {
        elem.push_back(a[i]);
        dfs(sum+a[i]);
        elem.pop_back(); 
    }
}

int main()
{
    cin>>n>>k;
    dfs(0);

    if(cnt==0 || cnt<k) cout<<"-1";
    return 0;

}