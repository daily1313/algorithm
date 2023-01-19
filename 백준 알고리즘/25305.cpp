#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int>score;

int main()
{
    int n, k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int P_score;
        cin>>P_score;
        score.push_back(P_score);
    }
    sort(score.begin(),score.end(),greater<int>());
    
    cout<<score[k-1];
}