#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int num;
	vector<int>v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>num;
		v.insert(v.begin()+(i-num),i+1);
	}
	for(auto rank: v)
	{
		cout<<rank<<" ";
	}
}
