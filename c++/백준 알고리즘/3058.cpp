#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		vector<int>p;
		int cnt=0;
		for(int j=0;j<7;j++)
		{
			int num;
			cin>>num;
			if(num%2==0){
				p.push_back(num);
				cnt++;		
			}
		}
		int sum=0;
		for(int k=0;k<cnt;k++){
			sum+=p[k];
		}
		int min = *min_element(p.begin(),p.end());
		cout<<sum<<' '<<min<<'\n';
	}
	
	
}
