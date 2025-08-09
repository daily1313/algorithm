#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	vector<int>b(n);
	vector<int>c(n);
	vector<int>d(n);
	for(int i=0;i<n;i++)
	{
		int num1,num2,num3,num4;
		cin>>num1>>num2>>num3>>num4;
		a.push_back(num1);
		b.push_back(num2);
		c.push_back(num3);
		d.push_back(num4);
	}
	int cnt=0;
	sort(a.begin(),a.end());
	a.erase(unique(a.begin(),a.end()),a.end());
	sort(b.begin(),b.end());
	b.erase(unique(b.begin(),b.end()),b.end());
	sort(c.begin(),c.end());
	c.erase(unique(c.begin(),c.end()),c.end());
	sort(d.begin(),d.end());
	d.erase(unique(d.begin(),d.end()),d.end());
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			for(int k=0;k<c.size();k++){
				
				for(int h=0;h<d.size();h++)
				{
					if(a[i]+b[j]+c[k]+d[h]==0) cnt++;
				}
			}
		}
	}
	cout<<cnt<<'\n';
}
