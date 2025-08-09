#include <iostream>
#include <vector>

using namespace std;
vector<int>tree[51];
int res = 0;
int delete_node;
void dfs(int start)
{
    if(start == delete_node) return;
    // 자식노드 없는경우 -> 리프노드
    if(tree[start].size()==0)
    {
        res++;
        return;
    }
    // 자식노드 하나인경우 -> 삭제된다면, 해당노드 -> 리프노드
    else if(tree[start].size()==1)
    {
        if(tree[start][0] == delete_node) 
        {
            res++;
            return;
        }
    }
    // 그렇지 않은 경우 dfs탐색
    for(auto elem : tree[start]) 
    {
        dfs(elem);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;

    int root_node;
    
    for(int i=0;i<n;i++)
    {
        int parent;
        cin>>parent;
        if(parent == -1) root_node = i;
        else tree[parent].push_back(i);
    }
    cin>>delete_node;
    dfs(root_node);
    cout<<res<<'\n';
}