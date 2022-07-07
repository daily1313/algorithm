#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	cin>>n;
	priority_queue<int>pq;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			int num;
			cin>>num;
			pq.push(num);
		}
	}
	int cnt=1;
	for(int i=0;i<n*n;i++)
	{
			if(cnt==n){
				break;
			}
			pq.pop();
			cnt++;
	}
	for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int data;
            cin >> data;
            pq.push(data);
        }
        for (int i = 0; i < n; i++)pq.pop();
    }
    cout << pq.top();
    return 0;
	cout<<pq.top()<<'\n';
}
