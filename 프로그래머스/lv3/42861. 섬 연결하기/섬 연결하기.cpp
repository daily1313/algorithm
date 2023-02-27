#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int parent[101];

bool cmp(vector<int> a, vector<int> b)
{
    return a[2] < b[2];
}

int findParent(int x)
{
    if(parent[x]==x) return x;
    return parent[x] = findParent(parent[x]);
}

void unionParent(int a, int b)
{
    a = findParent(a);
    b = findParent(b);
    if(a<b)
        parent[b]=a;
    else
        parent[a]=b;
}

bool sameParent(int a, int b) {
    a = findParent(a);
    b = findParent(b);
    return a == b;
}

int solution(int n, vector<vector<int>> costs) {
    int answer = 0;
    
    for(int i=0;i<n;i++)
        parent[i]=i;
    
    sort(costs.begin(),costs.end(),cmp);
    
    for(int i=0;i<costs.size();i++)
    {
        if(!sameParent(costs[i][0],costs[i][1]))
        {
            unionParent(costs[i][0],costs[i][1]);
            answer += costs[i][2];
        }
    }
    
    return answer;
}