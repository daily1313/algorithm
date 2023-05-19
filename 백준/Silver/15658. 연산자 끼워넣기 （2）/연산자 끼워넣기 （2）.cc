#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int arr[11];
vector<int> result;
int add_cnt, sub_cnt, mul_cnt, div_cnt;

void dfs(int add_idx, int sub_idx, int mul_idx, int div_idx, int index, int sum)
{
    if(index == n)
    {
        result.push_back(sum);
        return;
    }
    if(add_idx < add_cnt) dfs(add_idx+1, sub_idx, mul_idx, div_idx, index+1, sum + arr[index]);
    if(sub_idx < sub_cnt) dfs(add_idx, sub_idx+1, mul_idx, div_idx, index+1, sum - arr[index]);
    if(mul_idx < mul_cnt) dfs(add_idx, sub_idx, mul_idx+1, div_idx, index+1, sum * arr[index]);
    if(div_idx < div_cnt) dfs(add_idx, sub_idx, mul_idx, div_idx+1, index+1, sum / arr[index]);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>add_cnt>>sub_cnt>>mul_cnt>>div_cnt;
    dfs(0, 0, 0, 0, 1, arr[0]);
    auto res = minmax_element(result.begin(), result.end());
    cout<<*res.second<<'\n';
    cout<<*res.first<<'\n';
}
