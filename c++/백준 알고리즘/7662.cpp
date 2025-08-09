#include <iostream>
#include <queue>
#include <map>
using namespace std;
int n, t;
int main()
{
    
    cin>>n;
    
    while(n--)
    {
        priority_queue<long long, vector<long long>, less<long long>> max_q;
        priority_queue<long long,vector<long long>,greater<long long>> min_q;
        map<long long ,long long> freq;
        char input;
        long long num;
        cin>>t;
        for(int i=0;i<t;i++)
        {
            cin>>input>>num;
            if(input=='I') 
            {
                max_q.push(num);
                min_q.push(num);
                freq[num]++;
            }
            else if(num == -1)
            {
                while(!min_q.empty() && freq[min_q.top()]==0)
                {
                    min_q.pop();
                }
                if(!min_q.empty())
                {
                    min_q.pop();
                    freq[min_q.top()]--;
                }
            }
            else if(num == 1)
            {
                while(!max_q.empty() && freq[max_q.top()]==0)
                {
                    max_q.pop();
                }
                if(!max_q.empty())
                {
                    max_q.pop();
                    freq[max_q.top()]--;
                }
            }
        }
        while(!max_q.empty() && freq[max_q.top()]==0) max_q.pop();
        while(!min_q.empty() && freq[min_q.top()]==0) min_q.pop();

        if(min_q.empty()) cout<<"EMPTY"<<'\n';
        else cout<<max_q.top()<<" "<<min_q.top()<<'\n';
    }
} 