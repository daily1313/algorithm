#include <iostream>
#include <deque>

using namespace std;
deque<int> dq;
int n, m, res;


void moveLeft() 
{
    dq.push_back(dq.front());
    dq.pop_front();
}

void moveRight() 
{
    dq.push_front(dq.back());
    dq.pop_back();
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n; i++)
    {
        dq.push_back(i);
    }

    while(m--)
    {
        int find_num;
        cin>>find_num;
        int left = 0;
        int right = 0;
        for(int i=0;i<dq.size();i++)
        {
            if(dq[i] == find_num) 
            {
                left = i;
                right = dq.size()-i;
                break;
            }
        }
        if(left<right)
        {
            while(1)
            {
                if(dq.front()==find_num) break;
                moveLeft();
                res++;
            }
            dq.pop_front();
        }
        else 
        {
            while(1)
            {
                if(dq.front()==find_num) break;
                moveRight();
                res++;
            }
            dq.pop_front();
        }
    }
    cout<<res<<'\n';
}