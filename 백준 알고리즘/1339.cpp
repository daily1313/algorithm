#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	string s;
	int n;
	cin>>n;
	vector<int>alpha(26);
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			alpha[s[j]-'A']+=pow(10,(s.size()-1)-j);
		}
	}
	sort(alpha.rbegin(),alpha.rend());
	int num=9;
	int sum=0;
	for(int i=0;i<26;i++)
	{
		if(alpha[i])
		{ 
		sum += (alpha[i] * num);
		num--; 
		}
	}
	cout<<sum<<'\n';
}
