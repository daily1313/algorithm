#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n,m,t;
	cin>>n>>m;
	cin>>t; // 자르는 횟수
	vector<int>width(n); // 가로 
	vector<int>length(m); // 세로  
	for(int i=0;i<t;i++)
	{
		int a,b;
		cin>>a>>b;
		if(a==0) length.push_back(b);
		if(a==1) width.push_back(b);
	}
	width.push_back(n);
	length.push_back(m);
	sort(length.begin(),length.end());
	sort(width.begin(),width.end());
	int result =0;
	if(length.size()==1 && width.size()>1)
	{
		for(int j=1;j<width.size();j++)
		{
			if(length[0] * (width[j]-width[j-1])>result){
				result = length[0] * (width[j]-width[j-1]);
			}
		}
			cout<<result;	
	}
	else if(length.size()>1 && width.size()>1){
	for(int i=1;i<length.size();i++)
	{
		for(int j=1;j<width.size();j++)
		{
			if((length[i]-length[i-1])*(width[j]-width[j-1])>result){
				result = (length[i]-length[i-1])*(width[j]-width[j-1]);
			}
		}
	}
		cout<<result;
	}
	else if(length.size()>1 && width.size()==1)
	{
		for(int j=1;j<length.size();j++)
		{
			if(width[0] * (length[j]-length[j-1])>result){
				result = length[0] * (width[j]-width[j-1]);
			}
		}
		cout<<result;
	}
	else{
		cout<<width[0]*length[0];
	}
	
	
}
