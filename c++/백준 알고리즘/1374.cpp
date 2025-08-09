#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>lectures;
priority_queue<int,vector<int>,greater<int>>rooms;
int main()
{
	int n;
	cin>>n;
	int number, starttime,endtime;
	for(int i=0;i<n;i++)
	{
		cin>>number>>starttime>>endtime;
		lectures.push(make_pair(starttime,endtime));
	}
	rooms.push(lectures.top().second);
	lectures.pop();
	while(lectures.size())
	{
		if(rooms.top()<=lectures.top().first)
		{
			rooms.push(lectures.top().second);
			rooms.pop();
		}
		else
		{
			rooms.push(lectures.top().second);
		}
		lectures.pop();
	}
	cout<<rooms.size();
}
