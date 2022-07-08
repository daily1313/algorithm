#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>count(10001);
	
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		count[num-1]++;
	}
	for(int i=0;i<=10000;i++)
	{
		for(int j=0;j<count[i];j++)
		{
			cout<<i+1<<'\n';
		}
	}
}
