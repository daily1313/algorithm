#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>v;
int main()
{
	int N;
	cin>>N;
	int a;
	for(int i=0;i<N;i++){
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int cnt=2;
	int result = 0;
	for(int i=N-1;i>=0;i--){
		result = max(result,cnt+v[i]);
		cnt++;
	}
	cout<<result;


}
