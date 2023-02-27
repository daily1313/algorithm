#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n,m;
vector<pair<int,int>>v;
bool cmp(pair<int,int> &v1, pair<int,int> &v2)
{
    return v1.first < v2.first;
}
bool cmp2(pair<int,int> &v1, pair<int,int> &v2)
{
    return v1.second < v2.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int set,one;
        cin>>set>>one;
        v.push_back(make_pair(set,one));
    }
    

    sort(v.begin(),v.end(),cmp);

    int minSetMoney = v[0].first;
    // 묶음 가장 싼 것

    sort(v.begin(),v.end(),cmp2);

    int minOneMoney = v[0].second;

    // 낱개 가장 싼 것
    

    int money = (minSetMoney < minOneMoney * 6) ? 
    min((minSetMoney * (n/6) + minOneMoney * (n%6)),minSetMoney * ((n/6) + 1))
    : minOneMoney * n;
    
    cout<<money<<'\n';
    return 0;
}