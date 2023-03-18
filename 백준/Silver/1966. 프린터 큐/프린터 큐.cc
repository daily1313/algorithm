#include <iostream>
#include <queue>

using namespace std;


int main()
{
    int importance;
    int ans;
    
    int t;
    cin>>t;
    while(t--)
    {
        queue<pair<int, int>> q;
        priority_queue <int> pq;
        int cnt = 0, ans = 0;
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>importance;
            q.push({i,importance});
            pq.push(importance);
        }
    
         while (!q.empty()) {
            int idx = q.front().first;
            int value = q.front().second;
            q.pop();

            if (pq.top() == value) {

                pq.pop();
                ++cnt;

                if (idx == m) {
 
                    cout<<cnt<<'\n';
                    break;
                }
        }
        else q.push({idx, value});
    }
    }
    return 0;
}