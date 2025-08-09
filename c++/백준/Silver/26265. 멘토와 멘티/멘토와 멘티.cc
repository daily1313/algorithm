#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<string, string> &p1, pair<string, string> &p2)
{
    if(p1.first == p2.first) {
        return p1.second > p2.second;
    }
    else return p1.first < p2.first;
}

int main()
{
    int n;
    cin>>n;
    vector<pair<string, string>> v;
    for(int i=0;i<n;i++)
    {
        string mentor, menti;
        cin>>mentor>>menti;
        v.push_back(make_pair(mentor, menti));
    }

    sort(v.begin(), v.end(), cmp);

    for(auto elem : v) 
    {
        cout<<elem.first<<' '<<elem.second<<'\n';
    }

}