#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <deque>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[1001];
	for(int j=0;j<n;j++){
	
		deque<char>dq;
		int t;
		cin>>t;
		for(int i=0;i<t;i++)
		{
			cin>>a[i];
			if(i==0){
				dq.push_back(a[0]);
			}
			else if(a[i]<=(dq.front())){
				dq.push_front(a[i]);
			}
			else{
				dq.push_back(a[i]);
			}
			
		}
		while(dq.size()!=0){
			cout<<dq.front();
			dq.pop_front();
		}
		cout<<'\n';
	}
	return 0;
}
