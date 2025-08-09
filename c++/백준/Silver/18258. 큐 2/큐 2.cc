#include <iostream>
#include <queue>

using namespace std;
int N;
int main()
{
    cin>>N;
    queue<int>q;
    cin.tie(NULL);
	cin.sync_with_stdio(false);
    for(int i=0;i<N;i++)
    {
        string cmd;
        int x;
        cin>>cmd;
        if(cmd == "push") 
        {
            cin>>x;
            q.push(x);
        }
        else if(cmd == "front") 
        {
            if(q.empty()) 
            {
                cout<<-1<<'\n';
                continue;
            }
            cout<<q.front()<<'\n';
        }
        else if(cmd == "back") 
        {
            if(q.empty()) 
            {
                cout<<-1<<'\n';
                continue;
            }
            cout<<q.back()<<'\n';
        }
        else if(cmd == "size") 
        {   
            cout<<q.size()<<'\n';
        }
        else if(cmd == "empty") 
        {   
            if(q.empty()) 
            {
                cout<<1<<'\n';
                continue;
            }
            cout<<0<<'\n';
        }
        else if(cmd == "pop") 
        {
            if(q.empty())
            {
                cout<<-1<<'\n';
                continue;
            }
            int res = q.front();
            q.pop();
            cout<<res<<'\n';
        }
    }
    return 0;
}