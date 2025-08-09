#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int>v;
	int sum = 0;
	string N;
	cin>>N;
	bool check = false;
	for(int i=0;i<N.size();i++)
	{
		if(N[i]=='0'){
			check = true;	
		}
		v.push_back((N[i]-'0'));
	}
	for(int i=0;i<v.size();i++)
	{
		sum += (N[i] - '0');
	}
	if(sum % 3 ==0 && check){
		sort(v.rbegin(),v.rend());
		for(int i=0;i<v.size();i++){
			cout<<v[i];
		}
		cout<<'\n';
		return 0;		
	}//각자리수의 합 3의 배수 -> 전체 수가 3의 배수 
	else{
		cout<<-1<<'\n';
	}
	return 0;
}
