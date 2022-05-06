#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int m;
	cin>>m;
	for(int i=0;i<m;i++){
		int num;
		cin>>num;
		cout<<upper_bound(a.begin(),a.end(),num)-lower_bound(a.begin(),a.end(),num)<<' ';
	
	}
	//상한: 큰수 중에 첫번째 하한 : 같거나 큰 수 중에 첫번째   
	cout<<'\n';
	
}
